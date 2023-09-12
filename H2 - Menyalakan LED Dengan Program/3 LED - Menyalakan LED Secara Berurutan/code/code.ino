int pinLED1 = 6;
int pinLED2 = 7;
int pinLED3 = 8;

void setup() {
  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode(pinLED3, OUTPUT);
}

void loop() {
  digitalWrite(pinLED1, HIGH);
  delay(1000);
  digitalWrite(pinLED2, HIGH);
  delay(1000);
  digitalWrite(pinLED3, HIGH);
  delay(1000);

  digitalWrite(pinLED3, LOW);
  delay(1000);
  digitalWrite(pinLED2, LOW);
  delay(1000);
  digitalWrite(pinLED1, LOW);
  delay(1000);
  }
