

int button = 8;

boolean wasOpenLastTime = false;

void setup() {
  pinMode(8, INPUT);
}

void loop() {

  // öffnen
  if (digitalRead(button) == LOW) {
    if (wasOpenLastTime == false) {
      // play file
      wasOpenLastTime = true;
    }
  } else {
    if (wasOpenLastTime == true) {
      // play file(danke fürs zumachen)
      wasOpenLastTime = false;
    }
  }

}
