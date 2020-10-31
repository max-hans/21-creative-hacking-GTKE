#include "Ticker.h"

void blinkLED();

boolean ledState;

Ticker timer1(blinkLED, 500);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  timer1.start();
}

void loop() {
  timer1.update();
}

void blinkLED() {
  digitalWrite(LED_BUILTIN, ledState);
  ledState = !ledState;
}