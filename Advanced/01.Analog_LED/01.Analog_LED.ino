void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(3,85);
  delay(200);
  analogWrite(3,170);
  delay(200);
  analogWrite(3,255);
  delay(200);
}
