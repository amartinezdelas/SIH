#define led1 13
#define led2 12
#define led3 11
#define led4 10
#define led5 9
#define led6 8
#define led7 7
#define led8 6
#define con 5

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(con, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (digitalRead(con) == LOW) {
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(500);
  }
  while (digitalRead(con) == HIGH) {
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    delay(500);
  }
  while (digitalRead(con) == LOW) {
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    delay(500);
  }
  while (digitalRead(con) == HIGH) {
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, LOW);
    delay(500);
  }
  while (digitalRead(con) == LOW) {
    digitalWrite(led5, HIGH);
    delay(500);
    digitalWrite(led5, LOW);
    delay(500);
  }
  while (digitalRead(con) == HIGH) {
    digitalWrite(led6, HIGH);
    delay(500);
    digitalWrite(led6, LOW);
    delay(500);
  }
  while (digitalRead(con) == LOW) {
    digitalWrite(led7, HIGH);
    delay(500);
    digitalWrite(led7, LOW);
    delay(500);
  }
  while (digitalRead(con) == HIGH) {
    digitalWrite(led8, HIGH);
    delay(500);
    digitalWrite(led8, LOW);
    delay(500);
  }
}
