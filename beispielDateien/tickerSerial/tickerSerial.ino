#include "Ticker.h"

void printSerial();


int counter = 0;

Ticker timer1(printSerial, 500);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  timer1.start();
}

void loop() {
  timer1.update();
}

void printSerial() {
  Serial.println(counter);
  counter = counter + 1;
}