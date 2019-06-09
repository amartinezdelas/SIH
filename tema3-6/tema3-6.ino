#define tiempo 3
#define conm 2
int pausa;
void apagar() {
  for (int pinLed = 11; pinLed > 3; pinLed--) {
    digitalWrite(pinLed, LOW);
  }
}

void setup() {
  // inicializamos los pines del 4 al 11 como OUTPUT con un ciclo for
  for (int pinLed = 4; pinLed < 12; pinLed++)  {
    pinMode(pinLed, OUTPUT);
  }
  pinMode(conm, INPUT_PULLUP);
  pinMode(tiempo, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(tiempo) == LOW) {
    pausa = 150;   // El tiempo que permanece encendido cada led
  }
  else {
    pausa = 50;
  }
  // encendemos y apagamos en un loop desde el pin menor 4 al mayor 11
  if (digitalRead(conm) == LOW) {
    for (int pinLed = 4; pinLed < 12; pinLed++) {
      // pone el pinLed en HIGH encendiendo el led
      digitalWrite(pinLed, HIGH);
      delay(pausa);
    }
    delay(500);
    apagar();
    delay(500);
  }
  else {
    for (int pinLed = 11; pinLed > 3; pinLed--) {
      digitalWrite(pinLed, HIGH);
      delay(pausa);
    }
    delay(500);
    apagar();
    delay(500);
  }
}
