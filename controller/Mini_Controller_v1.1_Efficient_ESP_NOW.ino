/*
  Mars Base Rover
  Mini ESP32-C3 Controller v1.1

  Features:
  - Reads joystick on GPIO 3/4
  - ESP-NOW sends commands to rover
  - Efficient transmission:
      * No joystick movement: send a heartbeat only every 1000 ms
      * Movement: send when the command changes, with a 50 ms maximum refresh
      * Always sends a final STOP when movement returns to center
  - Keeps radio activity much lower when idle

  Joystick:
    VRX -> GPIO 3
    VRY -> GPIO 4
    VCC -> 3V3
    GND -> GND
    SW  -> not connected

  Update roverMAC below to match the rover's Wi-Fi MAC address.
*/

#include <WiFi.h>
#include <esp_now.h>

const int VRX_PIN = 3;
const int VRY_PIN = 4;

const int CENTER_X = 2235;
const int CENTER_Y = 2235;
const int DEADZONE = 180;

const uint8_t roverMAC[] = {0x44, 0xB1, 0x76, 0xCE, 0xE3, 0xFC};

const unsigned long MOVING_SEND_INTERVAL = 50;
const unsigned long IDLE_HEARTBEAT_INTERVAL = 1000;

struct RoverCommand {
  int leftMotor;
  int rightMotor;
};

RoverCommand lastSent = {0, 0};

unsigned long lastSendTime = 0;
bool wasMoving = false;

void onSent(const wifi_tx_info_t *, esp_now_send_status_t status) {
  Serial.print("Send: ");
  Serial.println(status == ESP_NOW_SEND_SUCCESS ? "OK" : "FAILED");
}

int joystickToPercent(int raw, int center) {
  int delta = raw - center;

  if (abs(delta) <= DEADZONE) {
    return 0;
  }

  if (delta > 0) {
    return constrain(map(delta, DEADZONE, 4095 - center, 0, 100), 0, 100);
  }

  return constrain(map(delta, -(center - DEADZONE), 0, -100, 0), -100, 0);
}

void sendCommand(RoverCommand cmd) {
  esp_err_t result = esp_now_send(roverMAC, (const uint8_t *)&cmd, sizeof(cmd));

  if (result != ESP_OK) {
    Serial.print("ESP-NOW send error: ");
    Serial.println(result);
  }

  lastSent = cmd;
  lastSendTime = millis();
}

void setup() {
  Serial.begin(115200);
  delay(1000);

  pinMode(VRX_PIN, INPUT);
  pinMode(VRY_PIN, INPUT);

  WiFi.mode(WIFI_STA);
  delay(100);

  Serial.println();
  Serial.println("===== Mars Base Mini Controller v1.1 =====");

  Serial.print("Controller MAC: ");
  Serial.println(WiFi.macAddress());

  Serial.print("Rover MAC: ");
  for (int i = 0; i < 6; i++) {
    if (i) Serial.print(":");
    Serial.printf("%02X", roverMAC[i]);
  }
  Serial.println();

  if (esp_now_init() != ESP_OK) {
    Serial.println("ESP-NOW Init Failed!");
    while (true) delay(1000);
  }

  esp_now_register_send_cb(onSent);

  esp_now_peer_info_t peerInfo = {};
  memcpy(peerInfo.peer_addr, roverMAC, 6);
  peerInfo.channel = 0;
  peerInfo.encrypt = false;

  if (esp_now_add_peer(&peerInfo) != ESP_OK) {
    Serial.println("Failed to add rover!");
    while (true) delay(1000);
  }

  Serial.println("ESP-NOW Initialized");
  Serial.println("Controller Ready");
}

void loop() {
  int rawX = analogRead(VRX_PIN);
  int rawY = analogRead(VRY_PIN);

  int x = joystickToPercent(rawX, CENTER_X);
  int y = joystickToPercent(rawY, CENTER_Y);

  RoverCommand cmd;
  cmd.leftMotor = constrain(y + x, -100, 100);
  cmd.rightMotor = constrain(y - x, -100, 100);

  bool moving = (cmd.leftMotor != 0 || cmd.rightMotor != 0);
  unsigned long now = millis();

  bool commandChanged =
    cmd.leftMotor != lastSent.leftMotor ||
    cmd.rightMotor != lastSent.rightMotor;

  bool shouldSend = false;

  if (moving) {
    if (commandChanged && now - lastSendTime >= MOVING_SEND_INTERVAL) {
      shouldSend = true;
    }
  } else if (wasMoving || now - lastSendTime >= IDLE_HEARTBEAT_INTERVAL) {
    shouldSend = true;
  }

  if (shouldSend) {
    sendCommand(cmd);

    Serial.print("RAW X:");
    Serial.print(rawX);
    Serial.print(" RAW Y:");
    Serial.print(rawY);
    Serial.print(" | L:");
    Serial.print(cmd.leftMotor);
    Serial.print(" R:");
    Serial.println(cmd.rightMotor);
  }

  wasMoving = moving;
  delay(5);
}
