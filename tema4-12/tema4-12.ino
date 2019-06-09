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
  do {
    digitalWrite(ledd, HIGH);
    delay(500);
    digitalWrite(ledd, LOW);
    delay(500);
    primero++;
  } while (primero < 4);
  primero = 0;
  do {
    digitalWrite(ledd, HIGH);
    digitalWrite(ledi, HIGH);
    delay(500);
    digitalWrite(ledd, LOW);
    digitalWrite(ledi, LOW);
    delay(500);
  } while (digitalRead(con) == HIGH);
  do {
    digitalWrite(ledi, HIGH);
    delay(500);
    digitalWrite(ledi, LOW);
    delay(500);
    primero++;
  } while (primero < 4);
  primero = 0;
}
