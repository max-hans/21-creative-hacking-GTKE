#include "Ticker.h"
#include <Servo.h>

Servo servo1;

boolean button1Pin = 8;
boolean button2Pin = 7;

boolean button1Pressed = false;
boolean button2Pressed = false;

int angle1 = 90;
int fadeAmount = 5;

void fadeServo1();

Ticker timer1(fadeServo1, 50);

void setup() {
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);

  servo1.attach(9);
  timer1.start();
}

void loop() {
  
  timer1.update();
}

void fadeServo1() {

  button1Pressed = digitalRead(button1Pin);
  button2Pressed = digitalRead(button2Pin);

  if (button1Pressed) {
    angle1 = angle1 + fadeAmount;
    if (angle1 > 180) {
      angle1 = 180;
    }
  }

  if (button2Pressed) {
    angle1 = angle1 -  fadeAmount;
    if (angle1 < 0) {
      angle1 = 0;
    }
  }
  servo1.write(angle1);

}
