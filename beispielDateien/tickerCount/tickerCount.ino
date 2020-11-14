#include "Ticker.h"

int button = 8;

int stages = 0;

void stageUp();

boolean ledState;

Ticker timer1(stageUp, 1000);

void setup() {
  Serial.begin(115200);
  pinMode(button, INPUT);
  timer1.start();
}

void loop() {
  timer1.update();

  if(digitalRead(button) == LOW){
    stages = 0;
  }
}

void stageUp() {
  stages = stages + 1;
  Serial.print("current stage: ");
  Serial.println(stages);
}
