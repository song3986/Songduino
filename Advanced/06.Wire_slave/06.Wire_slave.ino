#include <Wire.h>
void setup() {
  Wire.begin(8);
  Wire.onReceive(receiveEvent);
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop() {
}

void receiveEvent(int howMany) {
  int x = Wire.read();
  Serial.println(x);
  analogWrite(3, x);
}
