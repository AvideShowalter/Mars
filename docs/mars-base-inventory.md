# Mars Base Electronics Inventory

Initial snapshot: **September 10, 2026**. Compiled from the Mars Base Inventory conversation, including its later corrections. This is a project-wide inventory, including parts purchased or awaiting delivery, not a count of unused parts available today.

Google Sheets remains the working master. This GitHub copy is a manual snapshot; automatic synchronization is not enabled. Refresh it after the next inventory update.

## Current project notes

- **4×AA is the preferred beginner battery source.**
- **18650 use is intentionally deferred** while the family learns power fundamentals. Lithium charging hardware stays cataloged for a later learning stage.
- Quantity means the recorded total, not remaining stock. **1+** means at least one; **Multiple** and **Assortment** preserve counts that were not established. **TBD** means confirmation is needed.
- Items identified from photos retain uncertain identities or specifications in their notes. This inventory is not a wiring guide.

## Controllers

| Item | Quantity | Notes |
| --- | --- | --- |
| Arduino Uno R3 | 4 | Includes one earmarked for return from the escape-room project; return status TBD. |
| Arduino Nano 3.0 compatible, CH340 | 2 | Originally listed as ATmega328PB compatible. |
| Arduino Nano RP2040 Connect | 1 | Recorded identification; verify exact board before selecting pinouts. |
| ESP32-S3 DevKitC-1 N8R2 | 2 | Purchased. |
| MINI ESP32-C3 development board | 2 | Later confirmed found; USB-C, 4 MB flash, ceramic antenna, integrated 0.42-inch OLED. |

**Total recorded development boards: 11.** The two integrated OLEDs are included with the ESP32-C3 boards and are not additional standalone displays.

## Displays

| Item | Quantity | Notes |
| --- | --- | --- |
| TFT color display | 2 | Exact models and touch capability TBD. |
| SSD1306 0.96-inch OLED | 6 | Standalone I²C displays; latest corrected total. |
| 1602 character LCD | 3 | 16 columns × 2 rows. |
| PCF8574 I²C LCD backpack | 2 | Includes the installed backpack. |
| PCF8574 interface / GPIO expansion modules | 1+ reported | May overlap with the two LCD backpacks; reconcile before adding to totals. |
| 8×8 LED matrix | 1 | Driver model TBD. |
| 4-digit 7-segment display | 1 | Driver model TBD. |
| 1-digit 7-segment display | 1 | Separate from the 4-digit display. |

## User input and switches

| Item | Quantity | Notes |
| --- | --- | --- |
| Matrix / membrane keypad | 1 | Separate from tactile keypad PCB. |
| 4×4 tactile keypad PCB | 1 | 16 buttons. |
| Red arcade push button | 1 | Large button. |
| Blue triangular arcade push button | 1 | Large button. |
| Tactile push buttons | Assortment | Includes 6×6 mm style. |
| Colored button caps | Assortment | Multiple colors. |
| Toggle switches | Assortment | Exact types/counts TBD. |
| Rocker switches | Assortment | Large and small sizes. |
| Slide switches | Assortment | Exact types/counts TBD. |
| Microswitches | 2 | For position/limit sensing. |
| Roller lever actuators | 2 | Microswitch accessories, not two additional switches. |
| Standard analog joystick modules | 2 | X/Y and push-button controls. |
| Mini analog joystick | 1 | Total joysticks: 3. MH-FMG belongs to the buzzer, not this joystick. |
| Panel-mount potentiometers | Assortment | Values TBD. |
| Trimmer potentiometers | Assortment | Values TBD. |

## Motors and pumps

| Item | Quantity | Notes |
| --- | --- | --- |
| MG90S metal-gear micro servos | Multiple | Exact count TBD. |
| MG90 180° metal-gear servo | 1+ | Listed separately in the purchase inventory; check overlap with MG90S. |
| 9 g micro servos | Multiple | Check overlap with model-specific servo rows. |
| MG995 180° servo | 1 | Recorded purchase. |
| MG996 360° servo | 1 | Listed as continuous rotation. |
| 28BYJ-48 stepper motor | 1 | Listed as 5 V; driver availability not confirmed. |
| TT gearbox motor + wheel kits | 4 sets | Four motors with wheels. |
| Small brushed DC hobby motor | 1 | One of the three photographed circular motors. |
| Plastic geared DC motor with 2-pin JST | 1 | Exact model and voltage TBD. |
| Additional DC motors | Assortment | Reconcile with the specifically identified motors. |
| Mini submersible water pumps | 2 | Exact ratings TBD. |

## Sensors

| Item | Quantity | Notes |
| --- | --- | --- |
| SHT41 temperature/humidity sensor | 1 | Recorded purchase. |
| DHT11 temperature/humidity modules | 2 | Latest corrected total. |
| Water level / rain sensors | 2 | Latest corrected total. |
| Capacitive soil moisture sensors | 4 | User-confirmed count. |
| HC-SR501 PIR motion sensors | 2 | User-confirmed models/count. |
| MMA8452 accelerometer | 1 | Recorded purchase. |
| BMI160 IMU | 1 | Recorded purchase. |
| BH1750 light sensor | 1 | Recorded purchase. |
| Photoresistors / LDRs | Assortment | Values/count TBD. |
| Additional light sensors | Assortment | Exact identities TBD; check overlap with LDRs. |
| NTC thermistors | 2 identified | Two shown in the component photo; additional stock TBD. |
| Photointerrupter / photometric sensors | 2 | Recorded identification. |
| TCRT5000 5-way line sensor | 1 | Recorded purchase. |
| IR obstacle sensor | 1 | Recorded photo identification. |
| Flame sensor module, HW-484 | 1 | Corrected from an earlier microphone identification. |
| Reed switches | Multiple | Exact count TBD. |
| Small neodymium magnets | Multiple | Used with magnetic sensing/mechanisms. |
| Digital sound sensor | 1 | KY-037/KY-038 style identification; exact model TBD. |
| MAX4466 microphone amplifier | 1 | Separate from digital sound sensor. |
| Loose IR receiver / phototransistor | 1+ | Identification remains uncertain. |

## Audio, communication, storage and time

| Item | Quantity | Notes |
| --- | --- | --- |
| Small 8-ohm speaker with JST connector | 1 | Recorded photo identification. |
| Other speakers / speaker modules | TBD | Includes a disconnected salvage speaker; reconcile overlap before totaling. |
| UART MP3 player module | 1 | Recorded purchase. |
| MH-FMG active buzzer module | 1 | Corrected marking; separate from bare buzzers. |
| Other active buzzer modules / passive buzzers | TBD | Possible overlap with named entries. |
| Bare active buzzer | 1 | Separate component. |
| Bare passive buzzer | 1 | Separate component. |
| HM-10 BLE module | 1 | Recorded purchase. |
| MFRC522 RFID reader kits | 2 | Includes 2 cards, 2 key fobs and 2 header sets; do not count kits and contents as extra readers. |
| 24-key IR remote | 1 | Pairs with IR receiver modules. |
| IR transmitter modules | 1+ | Exact total TBD. |
| IR receiver modules | 2+ | Two modules reported; reconcile loose receiver separately. |
| MicroSD card module | 1 | Card availability/capacity not recorded. |
| DS1302 RTC modules | 2 | Latest corrected total. |

## Power and solar

| Item | Quantity | Notes |
| --- | --- | --- |
| 4×AA battery holders / packs | 1+ | Preferred beginner battery source; AA cell stock not counted. |
| 2×AA battery holders | Multiple | Exact count TBD. |
| 9 V battery snap connectors | Multiple | Connectors, not batteries. |
| Single-cell 18650 holder | 1 | Use deferred. |
| 18650 cells | TBD | No reliable stock count; use intentionally deferred. |
| 6 V, 1.2 W solar panel | 1 | Recorded purchase. |
| Mini 5 V, 60 mA solar panels | 1+ | Exact total TBD. |
| 12 V solar panel | 1 reported | Later discussed/shown; exact label specifications TBD. |
| CN3065 solar charging module | 1+ | User confirmed it came with the solar kit; use deferred with lithium projects. |
| TP4056 charging modules | 1+ | Lithium use deferred. |
| MB102 breadboard power modules | 2+ | User confirmed at least two. |
| Waterproof inline blade fuse holder | 1 | Recorded purchase. |
| 10 A fuse | 1+ | Supplied rating recorded, not a recommended rating for every circuit. |

## Wiring, connectors and power electronics

| Item | Quantity | Notes |
| --- | --- | --- |
| Jumper wires | Assortment | Male-male, male-female and female-female; includes a 65-wire breadboard kit. |
| JST pigtails | Multiple | JST to stripped red/black leads. |
| 2-pin JST power cable / connector assembly | 1 | Corrected from an earlier lamp identification. |
| USB-C breakout / connector modules | 5 | Recorded photo count. |
| 22 AWG silicone wire | TBD length | Purchase confirmed. |
| 18 AWG power wire | TBD length | Later correction: missed purchase / in cart or coming; delivery must be confirmed. |
| Wago connectors | Multiple | Existing connectors reported; additional connectors in cart. |
| Male pin header strips / short segments | Assortment | Exact counts TBD. |
| TB6612 dual motor driver | 1 | Rover motor control. |
| MOSFET modules / transistors | Assortment | Exact models/counts TBD. |
| Relay modules | Assortment | Exact models/counts TBD. |
| 74HC595 expansion modules | 1+ | Digital output expansion. |

## Lighting and discrete components

| Item | Quantity | Notes |
| --- | --- | --- |
| WS2812B addressable RGB LEDs | 1+ | Unit/strip length and total LED count TBD. |
| 200-LED USB firecracker string | 1 string | Counted as one assembly. |
| 650 nm laser modules | 10 | Latest consolidated total; listed as 5 V. |
| White LEDs | Assortment | Includes clear 5 mm packages. |
| Miscellaneous LEDs | Assortment | Check overlap with white LEDs. |
| Mini incandescent bulbs | 3 | Separate from LEDs. |
| Mini lamp socket | 1 | Corrected from an earlier motor-bracket identification. |
| Resistors | Assortment | Values/counts TBD. |
| Ceramic capacitors | Assortment | Values/counts TBD. |
| Electrolytic capacitors | Assortment | Values/counts TBD. |
| TO-92 transistors / semiconductors | Assortment | Exact markings TBD. |
| DIP integrated circuits | Assortment | Exact markings TBD. |
| Rectifier diodes | Assortment | Exact models TBD. |
| Small-signal diodes | Assortment | Exact models TBD. |
| Power diodes | Assortment | Exact models TBD. |

## Cooling, tools and build supplies

| Item | Quantity | Notes |
| --- | --- | --- |
| TEC1-12706 Peltier modules | 2 | Recorded purchase. |
| W1209 thermostat controllers | 2 | Recorded purchase. |
| GD900 thermal paste | 1 | Package size TBD. |
| Aluminum heatsinks / cooling blocks | Assortment | Includes an 80×80×80 mm radiator listing; check overlap with rows below. |
| Aluminum water-cooling blocks | TBD | Purchase confirmed; count TBD. |
| TO-220 heatsinks | TBD | Purchase confirmed; count TBD. |
| Fans | Multiple | Existing fans recorded; sizes/ratings TBD. |
| 830-point solderless breadboard | 1+ | One specifically identified; other breadboards may overlap. |
| Prototype PCBs | 1+ | Exact count/sizes TBD. |
| Metric screw assortment | 1 assortment | Recorded purchase. |
| 320-piece screw/nut kit | 1 kit | Original kit size, not remaining piece count. |
| Digital calipers | 1 | Recorded purchase. |
| Soldering iron | 1 | User-confirmed. |
| ATmega328P programming/test adapter | 1 | Recorded photo identification. |

## Salvaged components

| Item | Quantity | Notes |
| --- | --- | --- |
| CS-134 REV08 control PCB | 1 | Original function TBD. |
| BBB863 main control PCB | 1 | Original controller and two tactile buttons; part of one salvaged assembly. |
| BBB863-2 LED daughterboard | 1 | Contains three surface-mount LEDs; not a sensor board. |
| BBB863 wired LEDs | 3 | Separate wired LEDs from that assembly. |
| BBB863 spring/contact assemblies | 2 | Mechanical/electrical contacts. |
| BBB863 flexible PCB/contact strip | 1 | Purpose TBD. |
| Possible laser diode / aluminum heatsink assembly | 1 | Three leads; identity and specifications uncertain. Keep unpowered pending identification. |
| HD_DCV1.2 DC power input board | 1 | Mini barrel jack, ON/OFF slide switch, LED+/LED− outputs. Original voltage and jack size unknown; smaller than Arduino Uno jack. |
| Other salvaged parts | Assortment | Reconcile with named items before adding counts. |

The disconnected BBB863 speaker is tracked in the audio reconciliation note, not counted a second time here.

## Next inventory refresh

1. Confirm arrivals, especially the 18 AWG wire and remaining order items.
2. Replace uncertain quantities with physical counts and separate installed parts from available stock if useful.
3. Reconcile possible overlaps: servos, PCF8574 boards, speakers/buzzers, motors, light sensors, heatsinks and breadboards.
4. Keep recommendations such as additional regulators, fuse kits and future actuators out of owned stock until purchase is confirmed.
5. Refresh this Markdown snapshot from the working Google Sheet when the inventory update is finished.
