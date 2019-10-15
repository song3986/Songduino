void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    long value = Serial.parseInt();
    Serial.println(value);
    analogWrite(3, value);
  }

}
