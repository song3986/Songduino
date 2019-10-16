void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop() {
  int val = analogRead(0);
  val = map(val, 0, 1023, 0, 255);
  analogWrite(3, val);
}
