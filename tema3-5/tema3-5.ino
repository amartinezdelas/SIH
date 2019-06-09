const int pausa = 100;   // El tiempo que permanece encendido cada led
#define conm 2

void setup() {
  // inicializamos los pines del 4 al 11 como OUTPUT con un ciclo for
  for (int pinLed = 4; pinLed < 12; pinLed++)  {
    pinMode(pinLed, OUTPUT);
  }
  pinMode(conm, INPUT_PULLUP);
}

void loop() {
  // encendemos y apagamos en un loop desde el pin menor 4 al mayor 11
  if (digitalRead(conm) == LOW) {
    for (int pinLed = 4; pinLed < 12; pinLed++) {
      // pone el pinLed en HIGH encendiendo el led
      digitalWrite(pinLed, HIGH);
      delay(pausa);
    }
    delay(500);
    for (int pinLed = 11; pinLed > 3; pinLed--) {
      digitalWrite(pinLed, LOW);
    }

  }
  else {
    for (int pinLed = 11; pinLed > 3; pinLed--) {
      digitalWrite(pinLed, HIGH);
      delay(pausa);
    }
    delay(500);
    for (int pinLed = 11; pinLed > 3; pinLed--) {
      digitalWrite(pinLed, LOW);
    }
  }
}
