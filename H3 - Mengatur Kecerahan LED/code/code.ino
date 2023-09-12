int pinLED = 6;

void setup() {
  pinMode(pinLED, OUTPUT);
}

void loop() {
  analogWrite(pinLED, 0);
  delay(1000);
  analogWrite(pinLED, 50);
  delay(1000);
  analogWrite(pinLED, 150);
  delay(1000);
  analogWrite(pinLED, 255);
  delay(1000);
}
