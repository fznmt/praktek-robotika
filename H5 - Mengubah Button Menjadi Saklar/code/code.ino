int button = 2;
int led = 3;
int statusLED;

void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if(digitalRead(button) == HIGH) {
    statusLED++;
    Serial.println(statusLED);
    delay(100);
    if(statusLED %2 == 1) {
      digitalWrite(led, HIGH);
      delay(100);
    } else {
      digitalWrite(led, LOW);
      delay(100);
    }
  }
}
