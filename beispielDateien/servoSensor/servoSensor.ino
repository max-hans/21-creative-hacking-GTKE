#include "Ticker.h"
#include <Servo.h>

Servo servo;

int targetAngle = 90;
int currentAngle = 90;

void readSensor();
void fadeServo();

Ticker sensorTimer(readSensor, 1000);
Ticker servoTimer(fadeServo, 50);

void setup() {
  servo.attach(9);

  sensorTimer.start();
  servoTimer.start();
}

void loop() {
  sensorTimer.update();
  servoTimer.update();
}

void readSensor() {

  if(analogRead(A0) > 500){
    targetAngle = 200;
  } else {
    targetAngle = 0;
  }
}

void fadeServo(){
  if(targetAngle > currentAngle){
    currentAngle = currentAngle + 1;
  } else {
    if(targetAngle < currentAngle){
      currentAngle = currentAngle - 1;
    } 
  }
  servo.write(currentAngle);
}