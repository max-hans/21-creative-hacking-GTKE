#include "Ticker.h"
#include <Servo.h>

Servo servo1;

int buttonPin = 8;
int buttonPressed = 0;


int winkel = 90;
int fadeAmount = 5;

void fadeServo1();

Ticker timer1(fadeServo1, 50);

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  servo1.attach(9);

  timer1.start();
}

void loop() {
  buttonPressed = digitalRead(sensorPin);
  timer1.update();
}

void fadeServo1() {
  servo1.write(winkel);

  if (button1Pressed) {
    winkel = winkel + fadeAmount;
    if (winkel > 180) {
      winkel = 180;
    }
  }

  if (button2Pressed) {
    winkel = winkel -  fadeAmount;
    if (winkel < 0) {
      winkel = 0;
    }
  }

}
