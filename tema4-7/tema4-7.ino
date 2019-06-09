#define ledd 13
#define ledi 12
#define con 9
int primero = 0;



void setup() {
  // put your setup code here, to run once:
  pinMode(ledd, OUTPUT);
  pinMode(ledi, OUTPUT);
  pinMode(con, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (primero < 4) {
    digitalWrite(ledd, HIGH);
    delay(500);
    digitalWrite(ledd, LOW);
    delay(500);
    primero++;
  }
  primero = 0;
  while (digitalRead(con) == HIGH) {
    digitalWrite(ledd, HIGH);
    digitalWrite(ledi, HIGH);
    delay(500);
    digitalWrite(ledd, LOW);
    digitalWrite(ledi, LOW);
    delay(500);
  }
  while (primero < 4) {
    digitalWrite(ledi, HIGH);
    delay(500);
    digitalWrite(ledi, LOW);
    delay(500);
    primero++;
  }
  primero = 0;
}
