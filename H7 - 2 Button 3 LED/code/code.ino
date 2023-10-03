int pinLED1 = 4;
int pinLED2 = 5;
int pinLED3 = 6; 
int pinButton1 = 2;
int pinButton2 = 3;

void setup() {
  pinMode(pinButton1, INPUT);
  pinMode(pinButton2, INPUT);
  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode(pinLED3, OUTPUT);
}

void loop() {
  if(digitalRead(pinButton1) == HIGH) {
      digitalWrite(pinLED1, HIGH);
      delay(1000);
      digitalWrite(pinLED2, HIGH);
      delay(1000);
      digitalWrite(pinLED3, HIGH);
      delay(1000);
      
      } else {
        digitalWrite(pinLED1, LOW);
        digitalWrite(pinLED2, LOW);
        digitalWrite(pinLED3, LOW);
      }

  if(digitalRead(pinButton2) == HIGH) {
      digitalWrite(pinLED3, HIGH);
      delay(1000);
      digitalWrite(pinLED2, HIGH);
      delay(1000);
      digitalWrite(pinLED1, HIGH);
      delay(1000);
  } else {
    digitalWrite(pinLED1, LOW);
    digitalWrite(pinLED2, LOW);
    digitalWrite(pinLED3, LOW);
  } 
}
