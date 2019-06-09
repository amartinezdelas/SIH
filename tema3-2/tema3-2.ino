#define LED 13
#define CONMT 12

void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
pinMode(CONMT, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED, digitalRead(CONMT));

}
// este programa tiene la misma función que el anterior, solo que el conmutador está configurado con resistencia pull-up interna de arduino.
// esto hace que solo tengamos que hacer una conexión del pin CONMT a GND para que se apague el led.
// si no hay nada conectado en el pin 12, el led tendrá valor alto.
