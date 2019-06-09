#define pul1 6
#define pul2 7
#define pul3 8
#define pul4 9

void setup() {
  // put your setup code here, to run once:
  pinMode(pul1, INPUT_PULLUP);
  pinMode(pul2, INPUT_PULLUP);
  pinMode(pul3, INPUT_PULLUP);
  pinMode(pul4, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(pul1) == LOW) {
    Serial.println("PULSADOR 1");
    delay(1000);
  }
  if (digitalRead(pul2) == LOW) {
    Serial.println("PULSADOR 2");
    delay(1000);
  }
  if (digitalRead(pul3) == LOW) {
    Serial.println("PULSADOR 3");
    delay(1000);
  }
  if (digitalRead(pul4) == LOW) {
    Serial.println("PULSADOR 4");
    delay(1000);
  }
}
