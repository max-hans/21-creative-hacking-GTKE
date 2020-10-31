
void setup() {
  pinMode(9, OUTPUT);
}

void loop() {

  if ( analogRead(A0) < 150 ) {
    digitalWrite(9, HIGH);
  } else {
    digitalWrite(9, LOW);
  }
  
}
