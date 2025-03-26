# Project iot-home-measurement-station

## About

Simple home measurement station to measure level of:
- temperature
- humidity
- pressure

Compatible with Arduino platform. Used and tested on [Arduino UNO R3 board](https://docs.arduino.cc/hardware/uno-rev3/).

## Settings

### Display vendor / model

Display used to this project is **SSH1106 128x64**, if you use other display, please see documentation of this library [GyverOLED](https://github.com/GyverLibs/GyverOLED).

File [main.ino](main.ino)
```c
GyverOLED<SSH1106_128x64> oled; // Line 4. Change for compatible display model.
```

### BME port address

BME port address. If you use other port address, please change this.

File [main.ino](main.ino)
```c
bme.begin(0x76); // Line 14. Change for correct port address.
```

### Interval of data refresh

Program has interval time for measurement information refresh. Value is in milliseconds.

Default is `10000 milliseconds` -> `10 seconds`.

File [main.ino](main.ino)
```c
delayTime = 10000; // Line 16. Change this value to change refresh interval.
```

## Used libraries

Adafruit_BME280_Library - https://github.com/adafruit/Adafruit_BME280_Library

GyverOLED - https://github.com/GyverLibs/GyverOLED