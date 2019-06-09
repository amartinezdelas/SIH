#define led1 13
#define led2 12
#define led3 11
#define led4 10
#define con1 9
#define con2 8
int j = 0;
int i = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(con1, INPUT_PULLUP);
  pinMode(con2, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(con1) == LOW) {
    j++;
    delay(500);
  }
  if (digitalRead(con2) == LOW) {
   do {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      delay(500);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      delay(500);
      i++;
    } while (i < j);
    i = 0;
    j = 0;
  }
}
