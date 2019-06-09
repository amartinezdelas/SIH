#define led1 13
#define led2 12
#define con1 11
#define con2 10
#define con 5
int parpadeo = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(con1, INPUT_PULLUP);
  pinMode(con2, INPUT_PULLUP);
  pinMode(con, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (digitalRead(con) == LOW) {
    if (digitalRead(con1) == LOW) {
      if (digitalRead(con2) == LOW) {
      while (parpadeo < 4) {
          digitalWrite(led1, HIGH);
          delay(500);
          digitalWrite(led1, LOW);
          delay(500);
          parpadeo++;
        }
        parpadeo = 0;

      }
      else {
        while (parpadeo < 4) {
          digitalWrite(led2, HIGH);
          delay(500);
          digitalWrite(led2, LOW);
          delay(500);
          parpadeo++;
        }
        parpadeo = 0;
      }
    }
    else {
      if (digitalRead(con2) == LOW) {
      while (parpadeo < 6) {
          digitalWrite(led1, HIGH);
          digitalWrite(led2, HIGH);
          delay(500);
          digitalWrite(led1, LOW);
          digitalWrite(led2, LOW);
          delay(500);
          parpadeo++;
        }
        parpadeo = 0;
      }
      else {
        while (parpadeo < 8) {
          digitalWrite(led1, HIGH);
          digitalWrite(led2, HIGH);
          delay(500);
          digitalWrite(led1, LOW);
          digitalWrite(led2, LOW);
          delay(500);
          parpadeo++;
        }
        parpadeo = 0;
      }
    }
  }

}
