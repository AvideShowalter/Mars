#include <WiFi.h>
#include <esp_now.h>
#include <esp_mac.h>

const int PWMA = 4;
const int AIN2 = 5;
const int AIN1 = 6;
const int STBY = 7;
const int BIN1 = 15;
const int BIN2 = 16;
const int PWMB = 17;

const int PWM_FREQUENCY = 20000;
const int PWM_RESOLUTION = 8;
const unsigned long FAILSAFE_MS = 1000;

struct RoverCommand {
  int leftMotor;
  int rightMotor;
};

volatile RoverCommand latestCommand = {0, 0};
volatile bool newCommand = false;
volatile unsigned long lastPacketTime = 0;

void driveMotor(int pwmPin, int in1Pin, int in2Pin, int command) {
  command = constrain(command, -100, 100);

  if (command == 0) {
    digitalWrite(in1Pin, LOW);
    digitalWrite(in2Pin, LOW);
    ledcWrite(pwmPin, 0);
    return;
  }

  int duty = map(abs(command), 0, 100, 0, 255);

  if (command > 0) {
    digitalWrite(in1Pin, HIGH);
    digitalWrite(in2Pin, LOW);
  } else {
    digitalWrite(in1Pin, LOW);
    digitalWrite(in2Pin, HIGH);
  }

  ledcWrite(pwmPin, duty);
}

void stopMotors() {
  driveMotor(PWMA, AIN1, AIN2, 0);
  driveMotor(PWMB, BIN1, BIN2, 0);
}

void onReceive(const esp_now_recv_info_t *info, const uint8_t *data, int len) {
  if (len != sizeof(RoverCommand)) {
    Serial.printf("Unexpected packet size: %d\n", len);
    return;
  }

  memcpy((void *)&latestCommand, data, sizeof(latestCommand));
  lastPacketTime = millis();
  newCommand = true;
}

void printHardwareMAC() {
  uint8_t mac[6];
  esp_read_mac(mac, ESP_MAC_WIFI_STA);

  Serial.printf(
    "Rover MAC Address: %02X:%02X:%02X:%02X:%02X:%02X\n",
    mac[0], mac[1], mac[2], mac[3], mac[4], mac[5]
  );
}

void setup() {
  Serial.begin(115200);
  delay(1000);

  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(STBY, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);

  ledcAttach(PWMA, PWM_FREQUENCY, PWM_RESOLUTION);
  ledcAttach(PWMB, PWM_FREQUENCY, PWM_RESOLUTION);

  digitalWrite(STBY, LOW);
  stopMotors();

  WiFi.mode(WIFI_STA);
  delay(100);

  Serial.println();
  Serial.println("===== Mars Rover v3.2.3 =====");
  printHardwareMAC();

  if (esp_now_init() != ESP_OK) {
    Serial.println("ESP-NOW Init Failed!");
    while (true) delay(1000);
  }

  esp_now_register_recv_cb(onReceive);
  digitalWrite(STBY, HIGH);

  Serial.println("ESP-NOW Initialized");
  Serial.println("TB6612 Initialized");
  Serial.println("Motor control ready");
  Serial.println("Waiting for controller...");
}

void loop() {
  RoverCommand command;

  noInterrupts();
  command.leftMotor = latestCommand.leftMotor;
  command.rightMotor = latestCommand.rightMotor;
  bool gotNewCommand = newCommand;
  newCommand = false;
  unsigned long packetTime = lastPacketTime;
  interrupts();

  if (gotNewCommand) {
    Serial.print("Left: ");
    Serial.print(command.leftMotor);
    Serial.print("   Right: ");
    Serial.println(command.rightMotor);

    driveMotor(PWMA, AIN1, AIN2, command.leftMotor);
    driveMotor(PWMB, BIN1, BIN2, command.rightMotor);
  }

  if (millis() - packetTime > FAILSAFE_MS) {
    stopMotors();
  }

  delay(5);
}
