#include <SoftwareSerial.h>
SoftwareSerial BT(10, 11); //10 RX, 11 TX.
int ledrojo = 3; //Pin LED rojo
int ledverde = 5; //Pin LED verde
int ledazul = 6; //Pin LED azul

void setup() {
  BT.begin(9600);
  pinMode(ledrojo, OUTPUT);
  pinMode(ledverde, OUTPUT);
  pinMode(ledazul, OUTPUT);
}

void loop() {
  while (BT.available() > 0)    {
    int rojo = BT.parseInt();
    int verde = BT.parseInt();
    int azul = BT.parseInt();

    if (BT.read() == '\n')    {
      analogWrite(ledrojo, rojo);
      analogWrite(ledverde, verde);
      analogWrite(ledazul, azul);
    }
  }
}
