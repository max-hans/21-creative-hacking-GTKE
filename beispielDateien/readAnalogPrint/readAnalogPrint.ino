
int threshold = 200;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int measuredValue = analogRead(A0);

  Serial.println(measuredValue);
  
  if (measuredValue > threshold) {
    digitalWrite(9, HIGH);
  } else {
    digitalWrite(9, LOW);
  }

  delay(100);

}
