#define conm 12
#define led 13

void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
pinMode(conm, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(conm) == LOW) {
  digitalWrite(led, HIGH); delay(250); digitalWrite(led, LOW); delay(250);
}
  else {
  digitalWrite(led, HIGH); delay(500); digitalWrite(led, LOW); delay(500);
}
}

