int button = 2;
int led = 3;

void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if(digitalRead(button) == HIGH) {
    delay(100);
    digitalWrite(led, HIGH);
  } else {
    delay(100);
    digitalWrite(led, LOW);
  }
}
