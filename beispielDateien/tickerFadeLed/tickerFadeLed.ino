#include "Ticker.h"
int sensorPin = 9;
int ledPin = 3;

int buttonPressed = 0;
int brightness = 0;
int fadeAmount = 5;

void fadeLED();

boolean ledState = false;

Ticker timer1(fadeLED, 50);

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  timer1.start();
}

void loop() {
  buttonPressed = digitalRead(sensorPin);
  timer1.update();
}

void fadeLED() {
  analogWrite(ledPin, brightness);

  if (buttonPressed) {
    brightness = brightness + fadeAmount;
    if (brightness > 255) {
      brightness = 255;
    }
  } else {
    brightness = brightness - fadeAmount;
    if (brightness < 0) {
      brightness = 0;
    }
  }
}