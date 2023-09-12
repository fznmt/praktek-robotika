int pinLED1 = 5;
int pinLED2 = 6;
int pinLED3 = 7;

void setup() {
  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode(pinLED3, OUTPUT);
}

void loop() {
  digitalWrite(pinLED1, HIGH);
  digitalWrite(pinLED3, HIGH);
  delay(1000);
  digitalWrite(pinLED1, LOW);
  digitalWrite(pinLED2, HIGH);
  digitalWrite(pinLED3, LOW);
  delay(1000);
  digitalWrite(pinLED2, LOW);

  digitalWrite(pinLED1, HIGH);
  delay(1000);
  digitalWrite(pinLED2, HIGH);
  delay(1000);
  digitalWrite(pinLED3, HIGH);
  delay(1000);
  
  digitalWrite(pinLED1, LOW);
  delay(1000);
  digitalWrite(pinLED2, LOW);
  delay(1000);
  digitalWrite(pinLED3, LOW);
  delay(1000);
 

  }
