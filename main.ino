#include <GyverOLED.h>
#include <Adafruit_BME280.h>

GyverOLED<SSH1106_128x64> oled;
Adafruit_BME280 bme;

unsigned long delayTime;

void setup() {
  oled.init();
  oled.clear();
  oled.update();

  bme.begin(0x76);

  delayTime = 10000;
}

void loop() {
  printResults();
  delay(delayTime);
}

void printResults() {
  oled.setCursorXY(1, 1);
  oled.print("Temperature " + String(bme.readTemperature()) + " C");

  oled.setCursorXY(1, 20);
  oled.print("Pressure " + String(bme.readPressure() / 100.0F) + " hPa");

  oled.setCursorXY(1, 40);
  oled.print("Humidity " + String(bme.readHumidity()) + " %");

  oled.update();
}
