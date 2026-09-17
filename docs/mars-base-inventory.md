# Mars Base Electronics Inventory

Updated **September 17, 2026** from **Sheet1** of the working Google Sheet. Photos come from Sheet1’s photo column. This is a manual snapshot; automatic syncing is not enabled.

## Project notes

- **4×AA is the preferred beginner battery source. 18650 use remains intentionally deferred while the family learns power fundamentals.**
- The 18 AWG wire and remaining order items have arrived. Purchases of the additional power/protection and actuator equipment are confirmed; the rows below preserve the models and quantities recorded in Sheet1.
- Quantities are recorded inventory counts, not necessarily unused stock. “Multiple” remains uncounted. No installed-versus-available split is supplied in the sheet.
- This refresh replaces the earlier conversation-based list with the current sheet rows. Items absent from Sheet1 are not carried forward as current stock. Product descriptions are recorded references, not verified wiring specifications.
- Click a photo to view its full-size repository copy. A dash means no photo was supplied for that row.

## Counts and descriptions to reconcile

The sheet contains both general and specific rows. These are retained separately without adding them together: TB6612 drivers (rows 22 and 114), W1209 controllers (87 and 109), 22 AWG wire (77 and 78), and general speakers, buzzers, light sensors and heatsinks alongside specific models. Row 22’s product description/link refers to TT motor kits even though its component name says TB6612. Row 36 still includes MH-FMG in the joystick details, although the earlier conversation identified that marking as a buzzer. Confirm these in Sheet1 during the next review.

## Controllers

| Component | Qty | Status | Details and notes | Photo |
| --- | --- | --- | --- | --- |
| Arduino Uno | 1 | Owned | 5V Arduino development board<br>Use: General control, prototyping<br>Sheet1 row 2 | — |
| Arduino Uno +WiFi | 1 | Owned | 5V Arduino development board<br>UNO R3 Official Box ATMEGA16U2 / UNO+WiFi R3 Original ATMEGA328P Chip CH340G For Arduino UNO Development Board WeMos ESP8266<br>Use: General control, prototyping<br>Sheet1 row 3 | <a href="inventory-003-arduino-uno-wifi.jpg"><img src="inventory-003-arduino-uno-wifi.jpg" alt="Arduino Uno +WiFi" width="110"></a> |
| Arduino Nano Type-C | 3 | Owned | Compact Arduino-compatible MCU<br>Type-C USB Nano 3.0 With the bootloader compatible Nano controller for arduino CH340 USB driver 16Mhz ATMEGA328PB<br>Use: Compact embedded projects<br>[Product reference](https://www.aliexpress.us/item/3256809661879534.html)<br>Sheet1 row 4 | <a href="inventory-004-arduino-nano-type-c.jpg"><img src="inventory-004-arduino-nano-type-c.jpg" alt="Arduino Nano Type-C" width="110"></a> |
| Arduino Nano Type-C | 1 | Owned | Compact Arduino-compatible MCU - no solder<br>Type-C USB Nano 3.0 With the bootloader compatible Nano controller for arduino CH340 USB driver 16Mhz ATMEGA328PB<br>Use: Compact embedded projects<br>[Product reference](https://www.aliexpress.us/item/3256809661879534.html)<br>Sheet1 row 5 | <a href="inventory-005-arduino-nano-type-c.jpg"><img src="inventory-005-arduino-nano-type-c.jpg" alt="Arduino Nano Type-C" width="110"></a> |
| ESP32-S3 DevKitC-1 | 2 | Owned | Wi-Fi/Bluetooth ESP32-S3<br>ESP32-S3 Development Board DevKitC-1 N16R8 WiFi BT Module 44Pin Type-C USB ESP32-S3 WROOM-1<br>Use: Mission Control, rover, wireless systems<br>[Product reference](https://www.aliexpress.us/item/3256811905724568.html)<br>Sheet1 row 6 | <a href="inventory-006-esp32-s3-devkitc-1.jpg"><img src="inventory-006-esp32-s3-devkitc-1.jpg" alt="ESP32-S3 DevKitC-1" width="110"></a> |
| MINI ESP32-C3 with OLED | 2 | Owned | 0.42 in OLED, 4MB flash, USB-C, ceramic antenna, 2.4GHz Wi-Fi/BT<br>Use: Small distributed controllers, rover controller, status nodes<br>[Product reference](https://www.aliexpress.us/item/3256807743067544.html)<br>Sheet1 row 7 | <a href="inventory-007-mini-esp32-c3-with-oled.jpg"><img src="inventory-007-mini-esp32-c3-with-oled.jpg" alt="MINI ESP32-C3 with OLED" width="110"></a> |
| ESP32-CAM | 1 | Owned | ESP32 camera board<br>ESP32-CAM WiFi Module ESP32 serial to WiFi ESP32 CAM Development Board 5V For Bluetooth with OV5640 Camera Module Nodemcu<br>Use: Future rover/base camera<br>[Product reference](https://www.aliexpress.us/item/3256803285802793.html)<br>Sheet1 row 8 | <a href="inventory-008-esp32-cam.jpg"><img src="inventory-008-esp32-cam.jpg" alt="ESP32-CAM" width="110"></a> |

## Displays

| Component | Qty | Status | Details and notes | Photo |
| --- | --- | --- | --- | --- |
| 3.5 in TFT SPI | 1 | Owned | Estardyn; ST7789V/ST7796S family<br>Estardyn 3.5 Inch TFT LCD Display, 240x320/320x480 SPI Module ST7789V/ST7796S<br>Use: Mission Control graphical display<br>[Product reference](https://www.aliexpress.us/item/3256806796021810.html)<br>Sheet1 row 9 | <a href="inventory-009-3-5-in-tft-spi.jpg"><img src="inventory-009-3-5-in-tft-spi.jpg" alt="3.5 in TFT SPI" width="110"></a> |
| 2.25 in TFT SPI | 1 | Owned | ST7789 Driver SPI Interface<br>2.25 Inch TFT LCD Module 76x284, ST7789 Driver SPI Interface Full View Color Screen for DIY<br>Use: Mission Control graphical display<br>[Product reference](https://www.aliexpress.us/item/3256809968903052.html)<br>Sheet1 row 10 | <a href="inventory-010-2-25-in-tft-spi.jpg"><img src="inventory-010-2-25-in-tft-spi.jpg" alt="2.25 in TFT SPI" width="110"></a> |
| LCD 1602 displays | 3 | Owned | 16x2 character LCDs<br>Use: Status and sensor displays<br>[Product reference](https://www.aliexpress.us/item/2251800429106431.html)<br>Sheet1 row 11 | <a href="inventory-011-lcd-1602-displays.jpg"><img src="inventory-011-lcd-1602-displays.jpg" alt="LCD 1602 displays" width="110"></a> |
| PCF8574 I2C LCD backpacks | 2 | Owned | I2C interface for LCD<br>Use: Reduce LCD pin usage<br>[Product reference](https://www.aliexpress.us/item/3256806951869323.html)<br>Sheet1 row 12 | <a href="inventory-012-pcf8574-i2c-lcd-backpacks.jpg"><img src="inventory-012-pcf8574-i2c-lcd-backpacks.jpg" alt="PCF8574 I2C LCD backpacks" width="110"></a> |
| Single-digit 7-segment LED | 1 | Owned | 1 digit<br>Use: Counters/status<br>Sheet1 row 13 | — |
| Multi-digit 7-segment LED display | 1 | Owned | Multi-digit display<br>Use: Timers/counters<br>Sheet1 row 14 | — |
| 0.96 OLED Display | 2 | Owned | 1-10pcs Original 0.96 inch oled IIC Serial White OLED Display Module 128X64 I2C SSD1306 12864 LCD Screen Board For Arduino<br>Use: Display<br>[Product reference](https://www.aliexpress.us/item/3256805954920554.html)<br>Sheet1 row 101 | <a href="inventory-101-0-96-oled-display.jpg"><img src="inventory-101-0-96-oled-display.jpg" alt="0.96 OLED Display" width="110"></a> |

## Motor / Motion

| Component | Qty | Status | Details and notes | Photo |
| --- | --- | --- | --- | --- |
| TT DC motors | 4 | Owned | Small geared DC motors<br>Use: Rover drivetrain<br>Sheet1 row 15 | — |
| Circular DC motors | 3 | Salvaged/Owned | Small round motors from photographed parts<br>Exact specs TBD<br>Use: Experiments / mechanisms<br>Sheet1 row 16 | — |
| SG90 servo motors | Multiple | Owned | 9g micro servo<br>Use: Lightweight mechanisms<br>Sheet1 row 17 | — |
| MG90S servo | 1 | Owned | 180 degree metal-gear micro servo<br>Use: Door/mechanisms<br>[Product reference](https://www.aliexpress.us/item/3256806837116059.html)<br>Sheet1 row 18 | <a href="inventory-018-mg90s-servo.jpg"><img src="inventory-018-mg90s-servo.jpg" alt="MG90S servo" width="110"></a> |
| MG995 servo | 1 | Owned | 180 degree high-torque servo<br>Use: Door/heavier mechanisms<br>[Product reference](https://www.aliexpress.us/item/3256808048813907.html)<br>Sheet1 row 19 | <a href="inventory-019-mg995-servo.jpg"><img src="inventory-019-mg995-servo.jpg" alt="MG995 servo" width="110"></a> |
| MG996 servo | 1 | Owned | 360 degree servo<br>Use: Continuous rotation mechanisms<br>Sheet1 row 20 | — |
| Linear actuator | 1 | Owned | 12 in actuator<br>Linear Actuator 12V, 12 Inch High Speed 0.55&quot;/s Linear Actuator, 220lbs/1000N Linear Motion Actuator with Mounting Bracket and IP54 Protection<br>Use: Airlock door project<br>[Product reference](https://www.amazon.com/dp/B0CWNBRKWB)<br>Sheet1 row 21 | <a href="inventory-021-linear-actuator.jpg"><img src="inventory-021-linear-actuator.jpg" alt="Linear actuator" width="110"></a> |
| TB6612 dual motor driver | 4 | Owned | Dual H-bridge motor driver<br>4 Sets TT Motor DC 3-6V Gearbox Motor Dual Shaft 200RPM Ratio 1:48 Motor with Tire Wheel Kit for Arduino DIY Smart Car Robot<br>Use: TT motors / rover<br>[Product reference](https://www.aliexpress.us/item/3256809064627835.html)<br>Sheet1 row 22 | <a href="inventory-022-tb6612-dual-motor-driver.png"><img src="inventory-022-tb6612-dual-motor-driver.png" alt="TB6612 dual motor driver" width="110"></a> |
| BTS7960-class high-current motor driver | 1 | Owned | High-current H-bridge<br>Previously referred to as BTS7969<br>Use: 12V linear actuator<br>Sheet1 row 23 | — |
| TB6612 Dual Motor Driver Board | 2 | Owned | TENSTAR 2pcs TB6612 Dual Motor Driver Board Red 1A TB6612FNG Chip Microcontroller<br>[Product reference](https://www.aliexpress.us/item/3256809711655066.html)<br>Sheet1 row 114 | <a href="inventory-114-tb6612-dual-motor-driver-board.jpg"><img src="inventory-114-tb6612-dual-motor-driver-board.jpg" alt="TB6612 Dual Motor Driver Board" width="110"></a> |

## Sensors

| Component | Qty | Status | Details and notes | Photo |
| --- | --- | --- | --- | --- |
| DHT temperature/humidity sensor | 1 | Owned | Digital temperature &amp; humidity<br>Use: Habitat environmental monitoring<br>[Product reference](https://www.aliexpress.us/item/3256807449697831.html)<br>Sheet1 row 24 | — |
| SHT41 temperature/humidity sensor | 1 | Owned | Higher-accuracy I2C sensor<br>TENSTAR SHT41 Digital Temperature and Humidity Sensor Module I2C Communication High Accuracy GY-SHT41<br>Use: Environmental monitoring<br>[Product reference](https://www.aliexpress.us/item/3256809711848870.html)<br>Sheet1 row 25 | <a href="inventory-025-sht41-temperature-humidity-sensor.jpg"><img src="inventory-025-sht41-temperature-humidity-sensor.jpg" alt="SHT41 temperature/humidity sensor" width="110"></a> |
| MMA8452 accelerometer | 5 | Owned | 3-axis accelerometer<br>GY-45 MMA8452 MMA8452Q Modules Digital Triaxial Accelerometer High-precision Inclination Tilt 3-Axis Module For Arduino<br>Use: Motion/tilt sensing<br>[Product reference](https://www.aliexpress.us/item/3256805436279402.html)<br>Sheet1 row 26 | <a href="inventory-026-mma8452-accelerometer.jpg"><img src="inventory-026-mma8452-accelerometer.jpg" alt="MMA8452 accelerometer" width="110"></a> |
| TCRT5000 5-way sensor | 1 | Owned | 5-channel IR tracking array<br>5-Way Black and White Line Identification Sensor Module Tracking Intelligent Car Infrared Sensor TCRT5000<br>Use: Rover line tracking<br>[Product reference](https://www.aliexpress.us/item/3256805740795136.html)<br>Sheet1 row 27 | <a href="inventory-027-tcrt5000-5-way-sensor.jpg"><img src="inventory-027-tcrt5000-5-way-sensor.jpg" alt="TCRT5000 5-way sensor" width="110"></a> |
| PIR HC-SR501 | 2 | Owned | Motion detector<br>PIR Sensor HC-SR501 Adjust IR Pyroelectric Infrared Motion Detector Module For Raspberry Pi Sensing Human Bod<br>Use: Habitat/security sensing<br>[Product reference](https://www.aliexpress.us/item/3256806942970892.html)<br>Sheet1 row 28 | <a href="inventory-028-pir-hc-sr501.png"><img src="inventory-028-pir-hc-sr501.png" alt="PIR HC-SR501" width="110"></a> |
| Soil moisture sensors | 4 | Owned | Soil moisture probes/modules<br>Use: Mars greenhouse<br>Sheet1 row 29 | — |
| Water sensors | Multiple | Owned | Water presence/level sensing<br>Use: Water system / leak detection<br>Sheet1 row 30 | — |
| Light sensors | Multiple | Owned | Photo/light sensing<br>Use: Solar tracking / lighting<br>Sheet1 row 31 | — |
| GY-302 Light sensor | 2 | Owned | Photo/light sensing<br>GY-302 BH1750 BH1750FVI light intensity illumination module 3V-5V for Arduino<br>Use: Light sensor<br>[Product reference](https://www.aliexpress.us/item/3256809270505240.html)<br>Sheet1 row 32 | <a href="inventory-032-gy-302-light-sensor.jpg"><img src="inventory-032-gy-302-light-sensor.jpg" alt="GY-302 Light sensor" width="110"></a> |
| Photometric sensors | 2 | Owned | Light/photometric sensing<br>Use: Solar/light experiments<br>Sheet1 row 33 | — |
| Reed switches | Multiple | Owned | Magnetic contact switch<br>Use: Door open/closed sensing<br>[Product reference](https://www.aliexpress.us/item/3256807131902161.html)<br>Sheet1 row 34 | — |
| Very small magnets | Multiple | Owned | For magnetic/reed sensing<br>Use: Door position sensing<br>Sheet1 row 35 | — |
| Sound Sensor | 1 | Owned | Sound Sensor Module Sound Control Sensor MAX4466 MAX9814 Switch Detection Whistle Switch Microphone Amplifier YANXD<br>Use: Future experiments<br>[Product reference](https://www.aliexpress.us/item/3256806852394253.html)<br>Sheet1 row 98 | <a href="inventory-098-sound-sensor.jpg"><img src="inventory-098-sound-sensor.jpg" alt="Sound Sensor" width="110"></a> |
| Infrared Transmitter | 1 | Owned | Use: Future experiments<br>[Product reference](https://www.aliexpress.us/item/3256808368291738.html)<br>Sheet1 row 99 | <a href="inventory-099-infrared-transmitter.jpg"><img src="inventory-099-infrared-transmitter.jpg" alt="Infrared Transmitter" width="110"></a> |
| GY-BMI160 | 2 | Owned | BMI160 GY-BMI160 6DOF 6-axis Rate Gyro Gravity Accelerometer Sensor Module IIC I2C SPI Communication Protocol 3-5V<br>Use: Sensors/control wiring<br>[Product reference](https://www.aliexpress.us/item/3256806165088215.html)<br>Sheet1 row 110 | <a href="inventory-110-gy-bmi160.png"><img src="inventory-110-gy-bmi160.png" alt="GY-BMI160" width="110"></a> |
| TCRT5000 Ifrared Reflective Sensor | 4 | Owned | TCRT5000 Infrared Reflective Sensor IR Photoelectric Switch Barrier Line Track Module Diode Triode Board 3.3v<br>Use: Sensors/control wiring<br>[Product reference](https://www.aliexpress.us/item/3256808220079549.html)<br>Sheet1 row 111 | <a href="inventory-111-tcrt5000-ifrared-reflective-sensor.jpg"><img src="inventory-111-tcrt5000-ifrared-reflective-sensor.jpg" alt="TCRT5000 Ifrared Reflective Sensor" width="110"></a> |

## Inputs

| Component | Qty | Status | Details and notes | Photo |
| --- | --- | --- | --- | --- |
| Joysticks | 3 | Owned | Includes QYF-860 and MH-FMG<br>KY-023 For Arduino Dual-Axis XY Joystick Module Higher Quality PS2 Joystick Control Lever Sensor Rated 4.9 /5<br>Use: Rover/Mission Control control<br>[Product reference](https://www.aliexpress.us/item/3256808029549027.html)<br>Sheet1 row 36 | <a href="inventory-036-joysticks.jpg"><img src="inventory-036-joysticks.jpg" alt="Joysticks" width="110"></a> |
| Large arcade-style buttons | 2 | Owned | Large pushbuttons<br>Use: Mission Control<br>[Product reference](https://www.aliexpress.us/item/3256808273235125.html)<br>Sheet1 row 37 | <a href="inventory-037-large-arcade-style-buttons.jpg"><img src="inventory-037-large-arcade-style-buttons.jpg" alt="Large arcade-style buttons" width="110"></a> |
| 22mm LED-ring momentary button | 1 | Owned | Illuminated momentary pushbutton, self-reset<br>Use: Airlock / Mission Control<br>[Product reference](https://www.aliexpress.us/item/3256806291060685.html)<br>Sheet1 row 38 | <a href="inventory-038-22mm-led-ring-momentary-button.jpg"><img src="inventory-038-22mm-led-ring-momentary-button.jpg" alt="22mm LED-ring momentary button" width="110"></a> |
| 12mm LED-ring momentary button | 5 | Owned | Illuminated momentary pushbutton, self-reset <br>12mm With Wire Waterproof Metal Push Button Switch LED Ring/Power Light Momentary Latching 3-6V<br>Red, Yellow, White, Blue, Green<br>Use: Airlock / Mission Control<br>[Product reference](https://www.aliexpress.us/item/3256806291060685.html)<br>Sheet1 row 39 | <a href="inventory-039-12mm-led-ring-momentary-button.jpg"><img src="inventory-039-12mm-led-ring-momentary-button.jpg" alt="12mm LED-ring momentary button" width="110"></a> |
| Buttons assortment | Multiple | Owned | Different colored tips/styles (DS316 &amp; DS314)<br>Use: User inputs<br>Sheet1 row 40 | <a href="inventory-040-buttons-assortment.jpg"><img src="inventory-040-buttons-assortment.jpg" alt="Buttons assortment" width="110"></a> |
| Switch assortment | Multiple | Owned | Various switch types<br>Use: Power/mode control<br>[Product reference](https://www.aliexpress.us/item/2251832711118648.html)<br>Sheet1 row 41 | — |
| DPST 30A rocker switch | 1 | Owned | High-current rocker with screw terminals<br>Use: Master power switching<br>[Product reference](https://www.aliexpress.us/item/2251832711118648.html)<br>Sheet1 row 42 | <a href="inventory-042-dpst-30a-rocker-switch.jpg"><img src="inventory-042-dpst-30a-rocker-switch.jpg" alt="DPST 30A rocker switch" width="110"></a> |
| Potentiometers | Multiple | Owned | Variable resistance input<br>Use: Analog controls<br>Sheet1 row 43 | — |
| Remote Control, light up button | 1 | Owned | RF 433MHz Wireless 10A Relay Receiver Remote Control Light Switch 220V 110V Mini Round Button Wall Panel Switch For LED Lamp<br>RF 433MHz<br>Use: Power/mode control<br>Sheet1 row 104 | — |

## Communication / Access

| Component | Qty | Status | Details and notes | Photo |
| --- | --- | --- | --- | --- |
| HM-10 BLE module | 1 | Owned | Bluetooth Low Energy<br>HM-10 BLE 4.0 Module Transparent Serial Port 4.0 Module With Logic Level Translator<br>Use: Wireless experiments<br>[Product reference](https://www.aliexpress.us/item/2251832666785613.html)<br>Sheet1 row 44 | <a href="inventory-044-hm-10-ble-module.jpg"><img src="inventory-044-hm-10-ble-module.jpg" alt="HM-10 BLE module" width="110"></a> |
| RFID kits | 2 | Owned | RFID reader kits<br>Use: Airlock/security access<br>Sheet1 row 45 | — |

## Audio

| Component | Qty | Status | Details and notes | Photo |
| --- | --- | --- | --- | --- |
| Speaker | 1 | Owned | Small speaker; includes salvaged speaker<br>Use: Audio/status sounds<br>Sheet1 row 46 | — |
| Buzzers | Multiple | Owned | Electronic buzzers<br>Use: Alerts<br>Sheet1 row 47 | — |
| MP3 UART module + speaker | 1 | Owned | Serial audio playback module<br>Use: Mission Control startup sounds<br>[Product reference](https://www.aliexpress.us/item/2251832596173584.html)<br>Sheet1 row 48 | <a href="inventory-048-mp3-uart-module-speaker.jpg"><img src="inventory-048-mp3-uart-module-speaker.jpg" alt="MP3 UART module + speaker" width="110"></a> |
| MP3 Type C player with battery | 1 | Owned | DIY Recording Card Movement Creative Gift Box Christmas birthday Card Music Cover MP3 Download Voice Module TYPE-C With Speaker<br>Use: DIY Recording Card Movement Creative Gift Box Christmas birthday Card Music Cover MP3 Download Voice Module TYPE-C With Speaker<br>[Product reference](https://www.aliexpress.us/item/3256810257231199.html)<br>Sheet1 row 49 | <a href="inventory-049-mp3-type-c-player-with-battery.jpg"><img src="inventory-049-mp3-type-c-player-with-battery.jpg" alt="MP3 Type C player with battery" width="110"></a> |
| MAX98357 I2S amplifier | 1 | Owned | 3W Class-D I2S amplifier<br>Use: ESP32 digital audio<br>[Product reference](https://www.aliexpress.us/item/3256809373329747.html)<br>Sheet1 row 50 | <a href="inventory-050-max98357-i2s-amplifier.jpg"><img src="inventory-050-max98357-i2s-amplifier.jpg" alt="MAX98357 I2S amplifier" width="110"></a> |
| High Quality Buzzer | 1 | Owned | High Quality Active / Passive Buzzer Module for Arduino New DIY Kit Active Buzzer Low Level Modules<br>Use: Future experiments<br>[Product reference](https://www.aliexpress.us/item/3256805341866909.html)<br>Sheet1 row 100 | <a href="inventory-100-high-quality-buzzer.jpg"><img src="inventory-100-high-quality-buzzer.jpg" alt="High Quality Buzzer" width="110"></a> |
| 1W Speaker | 1 | Owned | Round 8 Ohm 1W Speaker 8ohm 20MM Loud Speakers Mobile Phone Small Loudspeaker Audio<br>Use: Audio/status sounds<br>[Product reference](https://www.aliexpress.us/item/3256805870138546.html)<br>Sheet1 row 103 | <a href="inventory-103-1w-speaker.jpg"><img src="inventory-103-1w-speaker.jpg" alt="1W Speaker" width="110"></a> |

## Lighting / Optical

| Component | Qty | Status | Details and notes | Photo |
| --- | --- | --- | --- | --- |
| WS2812B addressable LED strip | 1 | Owned | Individually addressable RGB LEDs<br>Use: Mission Control status lighting<br>Sheet1 row 51 | — |
| WS2812 4X4 LED Matrix | 1 | Owned | Individually addressable RGB LEDs<br>WS2812 Module 5050 RGB 4x4 16 LED Matrix Built-in Full-color Driving Color Lamp For Arduino<br>Use: Mission Control status lighting<br>[Product reference](https://www.aliexpress.us/item/3256808378795457.html)<br>Sheet1 row 52 | <a href="inventory-052-ws2812-4x4-led-matrix.jpg"><img src="inventory-052-ws2812-4x4-led-matrix.jpg" alt="WS2812 4X4 LED Matrix" width="110"></a> |
| Fairy lights | 1 | Owned | Decorative LEDs<br>Warm White, 1PC 6M200LED<br>Use: Habitat lighting<br>[Product reference](https://www.aliexpress.us/item/3256810497352008.html)<br>Sheet1 row 53 | <a href="inventory-053-fairy-lights.jpg"><img src="inventory-053-fairy-lights.jpg" alt="Fairy lights" width="110"></a> |
| Lasers | Multiple | Owned | Small laser modules<br>Use controlled low-power modules<br>Use: Optical experiments / beam-break demos<br>Sheet1 row 54 | — |
| Possible laser diode + heatsink assembly | 1 | Salvaged | 3-lead brass/gold device in aluminum heatsink<br>Do not power until identified<br>Use: Future identification/testing<br>Sheet1 row 55 | — |
| BBB863-2 3-LED PCB | 1 | Salvaged | Three surface-mount LEDs<br>Use: Lighting experiments<br>Sheet1 row 56 | — |
| Small wired LEDs | 3 | Salvaged | Clear LED packages on leads<br>Use: Indicators<br>Sheet1 row 57 | — |
| LED Light Bar | 1 | Owned | Wireless USB Rechargeable Motion Sensor LED Bar Light Induction Night Light Portable Cordless Magnetic Cabinet Lamp for Kitchen<br>Use: Habitat lighting<br>[Product reference](https://www.aliexpress.us/item/3256807523398865.html)<br>Sheet1 row 105 | <a href="inventory-105-led-light-bar.jpg"><img src="inventory-105-led-light-bar.jpg" alt="LED Light Bar" width="110"></a> |

## Power

| Component | Qty | Status | Details and notes | Photo |
| --- | --- | --- | --- | --- |
| 4xAA battery holders | Multiple | Owned | ~6V with fresh alkaline cells<br>Use: Current preferred beginner battery source<br>Sheet1 row 58 | — |
| 2xAA battery holders | Multiple | Owned | ~3V alkaline<br>Use: Low-voltage experiments<br>Sheet1 row 59 | — |
| 9V battery connectors | Multiple | Owned | 9V snap leads<br>Use: Battery connection<br>Sheet1 row 60 | — |
| 18650 battery holders | Multiple | Owned | Li-ion cell holders<br>18650 use intentionally deferred while the family learns power fundamentals. 4×AA is the current preferred beginner battery source.<br>Use: Future advanced battery projects<br>Sheet1 row 61 | — |
| JST power pigtails | Multiple | Owned | JST connector one side, red/black wire other side<br>Use: Low-voltage power connections<br>Sheet1 row 62 | — |
| Breadboard power modules | 2 | Owned | Breadboard rail supply modules<br>3.3V/5V MB102 Breadboard Power Module+MB-102 830 Points Prototype  For Arduino kit +65 Jumper Wires Wholesale<br>Use: Prototyping 5V/3.3V circuits<br>[Product reference](https://www.aliexpress.us/item/3256805016940444.html)<br>Sheet1 row 63 | <a href="inventory-063-breadboard-power-modules.jpg"><img src="inventory-063-breadboard-power-modules.jpg" alt="Breadboard power modules" width="110"></a> |
| LM2596 adjustable buck converter | 1 | Owned | DC-DC step-down regulator<br>Use: 12V to 5V conversion<br>[Reference image](https://ae-pic-a1.aliexpress-media.com/kf/Se2ceb029dfbc4799a57cb4a7d6d32f3fn.jpg_960x960q75.jpg_.avif)<br>Sheet1 row 64 | <a href="inventory-064-lm2596-adjustable-buck-converter.jpg"><img src="inventory-064-lm2596-adjustable-buck-converter.jpg" alt="LM2596 adjustable buck converter" width="110"></a> |
| Adjustable boost/buck USB converter | 1 | Owned | USB input, ~1.2-24V adjustable output<br>Use: Power experiments<br>[Product reference](https://www.aliexpress.us/item/3256806824235431.html)<br>Sheet1 row 65 | <a href="inventory-065-adjustable-boost-buck-usb-converter.jpg"><img src="inventory-065-adjustable-boost-buck-usb-converter.jpg" alt="Adjustable boost/buck USB converter" width="110"></a> |
| USB-C PD trigger modules | 2 | Owned | Selectable 5/9/12/15/20V, advertised 100W<br>Use: Bench/Mission Control power<br>[Product reference](https://www.aliexpress.us/item/3256808061823356.html)<br>Sheet1 row 66 | <a href="inventory-066-usb-c-pd-trigger-modules.jpg"><img src="inventory-066-usb-c-pd-trigger-modules.jpg" alt="USB-C PD trigger modules" width="110"></a> |
| USB-C PD/QC dial trigger | 1 | Owned | Selectable ~5-20V<br>Use: Bench power experiments<br>[Product reference](https://www.aliexpress.us/item/3256808439898284.html)<br>Sheet1 row 67 | <a href="inventory-067-usb-c-pd-qc-dial-trigger.jpg"><img src="inventory-067-usb-c-pd-qc-dial-trigger.jpg" alt="USB-C PD/QC dial trigger" width="110"></a> |
| INA226 power monitor | 1 | Owned | 0-36V I2C voltage/current monitor<br>Use: Power monitoring<br>[Product reference](https://www.aliexpress.com/item/3256809613884215.html)<br>Sheet1 row 68 | <a href="inventory-068-ina226-power-monitor.jpg"><img src="inventory-068-ina226-power-monitor.jpg" alt="INA226 power monitor" width="110"></a> |
| INA3221 triple-channel power monitor | 1 | Owned | 3-channel voltage/current monitor<br>Use: 5V/rail monitoring<br>[Product reference](https://www.aliexpress.us/item/3256804234599267.html)<br>Sheet1 row 69 | <a href="inventory-069-ina3221-triple-channel-power-monitor.jpg"><img src="inventory-069-ina3221-triple-channel-power-monitor.jpg" alt="INA3221 triple-channel power monitor" width="110"></a> |
| 12V nominal solar panel | 1 | Owned | DC panel with alligator clips<br>Characterize Voc/current before use<br>Use: Future Mars Solar Power Lab<br>Sheet1 row 70 | — |
| 6V solar panel | 1 | Owned | 6V 200MA 1.2W<br>Mini 6V 200MA 1.2W Monocrystalline Silicon Solar Panel with Solar Charger CN3065 for 18650 Battery &amp; Cell Phone Charging<br>Use: Future Mars Solar Power Lab<br>[Product reference](https://www.aliexpress.us/item/3256812311364426.html)<br>Sheet1 row 71 | <a href="inventory-071-6v-solar-panel.jpg"><img src="inventory-071-6v-solar-panel.jpg" alt="6V solar panel" width="110"></a> |
| 5V solar panel | 1 | Owned | 5V 60MA<br>Mini Mono 80*45mm Solar Panel 5V 60MA for Mini Solar Panel Charging and Generating Electricity with Mini Solar Lipo Charger<br>Use: Future Mars Solar Power Lab<br>[Product reference](https://www.aliexpress.us/item/3256808076673638.html)<br>Sheet1 row 72 | <a href="inventory-072-5v-solar-panel.jpg"><img src="inventory-072-5v-solar-panel.jpg" alt="5V solar panel" width="110"></a> |
| CN3065 solar charger | 1 | Owned | Came with small solar kit; single-cell solar Li-ion charger<br>Not for direct connection to 12V panel<br>Use: Small solar/18650 learning project<br>Sheet1 row 73 | — |
| Inline 10A fuse | 1 | Owned | Inline fuse protection<br>Use: Main power protection<br>[Product reference](https://www.aliexpress.us/item/3256811827799269.html)<br>Sheet1 row 74 | <a href="inventory-074-inline-10a-fuse.jpg"><img src="inventory-074-inline-10a-fuse.jpg" alt="Inline 10A fuse" width="110"></a> |
| WAGO-style lever connectors | Multiple | Owned | 2/3/5-port assortment<br>Use: Power distribution<br>[Product reference](https://www.aliexpress.us/item/3256812477750135.html)<br>Sheet1 row 75 | <a href="inventory-075-wago-style-lever-connectors.jpg"><img src="inventory-075-wago-style-lever-connectors.jpg" alt="WAGO-style lever connectors" width="110"></a> |
| 18 AWG red/black stranded wire | Multiple | Owned | Recommended tinned copper silicone wire<br>Use: Main power/ground distribution<br>Arrival confirmed September 17, 2026.<br>Sheet1 row 76 | — |
| 22 AWG hookup/jumper wire | Multiple | Owned | Signal/light-load wiring<br>Use: Sensors/control wiring<br>Sheet1 row 77 | — |
| 22 AWG Wire | Multiple | Owned | Signal/light-load wiring<br>Yellow, Red, Green, Black, Blue<br>Use: Sensors/control wiring<br>[Product reference](https://www.aliexpress.us/item/3256808061834409.html)<br>Sheet1 row 78 | <a href="inventory-078-22-awg-wire.jpg"><img src="inventory-078-22-awg-wire.jpg" alt="22 AWG Wire" width="110"></a> |
| TP4056 18650 Battery Charger Module | 2 | Owned | 18650 TP4056 Lithium Battery Charger Module Charging Board With Protection Dual Functions Li-ion USB-C<br>[Product reference](https://www.aliexpress.us/item/3256810077355114.html)<br>Sheet1 row 115 | <a href="inventory-115-tp4056-18650-battery-charger-module.jpg"><img src="inventory-115-tp4056-18650-battery-charger-module.jpg" alt="TP4056 18650 Battery Charger Module" width="110"></a> |

## Switching / Protection

| Component | Qty | Status | Details and notes | Photo |
| --- | --- | --- | --- | --- |
| MOSFETs | Multiple | Owned | Electronic power switching<br>Use: Pumps, solenoids, loads<br>Sheet1 row 79 | — |
| Relays | Multiple | Owned | Electromechanical switching<br>Use: Loads / isolation<br>Sheet1 row 80 | — |
| Capacitors | Multiple | Owned | Various capacitors<br>Use: Filtering, decoupling, timing<br>Sheet1 row 81 | — |
| Resistors | Multiple | Owned | Various resistor values<br>Use: LED current limiting, pullups, dividers<br>Sheet1 row 82 | — |
| Diode | Multiple | Owned | Fast Switching Schottky Diode kit set 1N4148 1N4007 1N5819 1N5399 1N5408 1N5822 FR107 FR207,8values=100pcs,Electronic Components<br>Use: Loads / isolation<br>[Product reference](https://www.aliexpress.us/item/2251832446756419.html)<br>Sheet1 row 102 | <a href="inventory-102-diode.jpg"><img src="inventory-102-diode.jpg" alt="Diode" width="110"></a> |

## Water / Cooling

| Component | Qty | Status | Details and notes | Photo |
| --- | --- | --- | --- | --- |
| Water pumps | Multiple | Owned | Small DC pumps<br>Use: Greenhouse/water systems<br>Sheet1 row 83 | — |
| TEC1-12706 Peltier modules | 2 | Owned | Thermoelectric cooler<br>Use: Mini fridge/cooler<br>Sheet1 row 84 | — |
| Heatsinks | Multiple | Owned | Includes TEC and salvaged heatsinks<br>Use: Cooling power devices<br>Sheet1 row 85 | — |
| Water blocks | Multiple | Owned | Cooling blocks<br>40x40x12mm, 80x40x12mm<br>Use: TEC cooling project<br>[Product reference](https://www.aliexpress.us/item/3256812371755324.html)<br>Sheet1 row 86 | <a href="inventory-086-water-blocks.jpg"><img src="inventory-086-water-blocks.jpg" alt="Water blocks" width="110"></a> |
| W1209 thermostat controllers | 2 | Owned | Temperature control module<br>Use: Mini fridge/cooler<br>Sheet1 row 87 | — |
| Heatsink with fan | 1 | Owned | 80*80*80mm Aluminum Heatsink Radiator Heat Sink DC 12V 45W for TEC1 Thermoelectric Cooler Peltier TEC1 12706 12705 12703 12715<br>Use: Cooling power devices<br>[Product reference](https://www.aliexpress.us/item/3256805634815464.html)<br>Sheet1 row 106 | <a href="inventory-106-heatsink-with-fan.jpg"><img src="inventory-106-heatsink-with-fan.jpg" alt="Heatsink with fan" width="110"></a> |
| W1209 Temperature Control Switch | 1 | Owned | Javino W1209 DC 12V Heat Cool Thermostat Temperature Control Switch Thermometer Controller for Refrigerator/Heater<br>12V Blue<br>Use: Sensors/control wiring<br>[Product reference](https://www.aliexpress.us/item/3256810450758471.html)<br>Sheet1 row 109 | <a href="inventory-109-w1209-temperature-control-switch.jpg"><img src="inventory-109-w1209-temperature-control-switch.jpg" alt="W1209 Temperature Control Switch" width="110"></a> |

## Connectors / Prototyping

| Component | Qty | Status | Details and notes | Photo |
| --- | --- | --- | --- | --- |
| Jumper cables | Multiple | Owned | Dupont-style jumper wires<br>Use: Breadboard/prototyping<br>Sheet1 row 88 | — |
| 2.54mm female header kit | Multiple | Owned | 4/6/8/10/12/16/40-pin single-row sockets<br>Use: Module connections<br>Sheet1 row 89 | — |
| USB-C cables/connectors | Multiple | Owned | USB-C items shown with controllers<br>Use: Power/programming<br>[Product reference](https://www.aliexpress.us/item/3256806984951525.html)<br>Sheet1 row 90 | — |
| Heat shrink tube | Multiple | Owned | thermoresistant tube<br>Use: Permanent wiring<br>127-750pcs Heat-shrink Tubing Thermoresistant Tube Heat Shrink Wrapping Kit Electrical Connection Wire Cable Insulation Sleeving<br>Sheet1 row 97 | — |
| M2, M2.5, M3, M4, M5 screws | Multiple | Owned | 320pcs Premium Stainless Steel Screw and Nut Assortment Kit - Corrosion-Resistant, Snap-in Nuts, M2 to M5 Sizes<br>See photo for sizes<br>Use: Prototyping<br>[Product reference](https://www.aliexpress.us/item/3256807676645012.html)<br>Sheet1 row 107 | <a href="inventory-107-m2-m2-5-m3-m4-m5-screws.jpg"><img src="inventory-107-m2-m2-5-m3-m4-m5-screws.jpg" alt="M2, M2.5, M3, M4, M5 screws" width="110"></a> |
| M1.2, M1.4, M1.6, M2, M3 | Multiple | Owned | 750pcs M1.2 M1.4 M1.6 M2 M3 Mini Micro Phillips Thin Wafer Flat Head Screw Bolt for Laptop Phone Glasses Set Assortment Kit<br>See photo for sizes<br>Use: Prototyping<br>[Product reference](https://www.aliexpress.us/item/3256802317314157.html)<br>Sheet1 row 108 | <a href="inventory-108-m1-2-m1-4-m1-6-m2-m3.jpg"><img src="inventory-108-m1-2-m1-4-m1-6-m2-m3.jpg" alt="M1.2, M1.4, M1.6, M2, M3" width="110"></a> |

## Tools

| Component | Qty | Status | Details and notes | Photo |
| --- | --- | --- | --- | --- |
| Soldering iron | 1 | Owned | Electronics soldering tool<br>Use: Permanent wiring<br>Sheet1 row 91 | — |

## Salvage

| Component | Qty | Status | Details and notes | Photo |
| --- | --- | --- | --- | --- |
| BBB863 main control PCB | 1 | Salvaged | Original controller with tactile switches K2/K3<br>Epoxy-covered controller<br>Use: Reverse-engineering / parts salvage<br>Sheet1 row 92 | — |
| BBB863 spring/contact assemblies | 2 | Salvaged | Mechanical/electrical contacts<br>Use: Future experiments<br>Sheet1 row 93 | — |
| BBB863 flexible contact strip | 1 | Salvaged | Small brown flexible PCB/contact strip<br>Use: Future identification<br>Sheet1 row 94 | — |
| HD_DCV1.2 mini DC input board | 1 | Salvaged | Mini barrel jack, ON/OFF slide switch, LED+/LED- output<br>Voltage and jack size TBD<br>Use: Switched low-voltage input<br>Sheet1 row 95 | — |
| White socket-like component | 1 | Salvaged | Appears more like a small lamp/light-bulb socket than motor component<br>Use: Future identification<br>Sheet1 row 96 | — |

## Expansion

| Component | Qty | Status | Details and notes | Photo |
| --- | --- | --- | --- | --- |
| 74HC595 Output Port Expansion 8 Shift | 1 | Owned | DC3.3-5V 74HC595 expansion module shift register 8-bit shift register<br>[Product reference](https://www.aliexpress.us/item/3256804466747471.html)<br>Sheet1 row 112 | <a href="inventory-112-74hc595-output-port-expansion-8-shift.jpg"><img src="inventory-112-74hc595-output-port-expansion-8-shift.jpg" alt="74HC595 Output Port Expansion 8 Shift" width="110"></a> |
| 74HC595 Output Port Expansion 3 to 24pin LED control | 1 | Owned | Microcontroller Serial to Parallel Pin IO Expansion Module 74HC595 Output Port Expansion 3 to 24pin LED control<br>[Product reference](https://www.aliexpress.us/item/3256807085990530.html)<br>Sheet1 row 113 | <a href="inventory-113-74hc595-output-port-expansion-3-to-24pin-led-control.png"><img src="inventory-113-74hc595-output-port-expansion-3-to-24pin-led-control.png" alt="74HC595 Output Port Expansion 3 to 24pin LED control" width="110"></a> |

