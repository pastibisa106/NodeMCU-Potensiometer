void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println(F("SETUP"));
}

void loop() {
  Serial.println(analogRead(A0));
  delay(500);
}
