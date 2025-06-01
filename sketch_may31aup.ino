void setup() {

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}
void loop() {
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(200);
}