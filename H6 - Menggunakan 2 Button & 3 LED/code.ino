int pinLED1 = 4;
int pinLED2 = 5;
int pinLED3 = 6; 
int pinButton1 = 2;
int pinButton2 = 3;
int statusLED1;
int statusLED2;

void setup() {
  Serial.begin(9600);
  pinMode(pinButton1, INPUT);
  pinMode(pinButton2, INPUT);
  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode(pinLED3, OUTPUT);
}

void loop() {
  if(digitalRead(pinButton1) == HIGH) {
    statusLED1++;
    Serial.println(statusLED1);
    delay(500);
    
    if(statusLED1 % 2 == 1) {
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
  }

  if(digitalRead(pinButton2) == HIGH) {
    statusLED2++;
    Serial.println(statusLED2);
    delay(500);
    if(statusLED2 % 2 == 1) {
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
}
