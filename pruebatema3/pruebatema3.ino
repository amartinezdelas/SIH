#define MARCHA 12
#define LED 13
#define PARO 11
void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
pinMode(MARCHA, INPUT_PULLUP);
pinMode(PARO, INPUT_PULLUP);
digitalWrite(LED, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(MARCHA) == LOW){
  digitalWrite(LED, HIGH);
  
}
if (digitalRead(PARO) == LOW) {
  digitalWrite(LED, LOW);
}
}
