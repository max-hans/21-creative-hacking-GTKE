
int minimumValue = 10;
int maximumValue = 150;

void setup() {
  Serial.begin(115200);
}

void loop() {

  int measuredValue = analogRead(A0);
  Serial.print("measuredValue: ");
  Serial.println(measuredValue);

  int mappedValue = map(measuredValue, 0,1023,minimumValue, maximumValue);
  Serial.print("mappedValue: ");
  Serial.println(mappedValue);
  
  delay(100);

}
