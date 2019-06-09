  // definimos el pin 13 como led y el pin 12 como conmutador
#define LED 13
#define CONMT 12

void setup() {
  // aquí simplemente declaramos led y conmutador como salida y entrada
pinMode(LED, OUTPUT);
pinMode(CONMT, INPUT);
}

void loop() {
  // le ordenamos que escriba en el led lo que tenemos en el conmutador
digitalWrite(LED, digitalRead(CONMT));

}
  // este programa sirve para controlar un led con un conmutador.
  // el inconveniente es que tenemos que tener siempre un valor en el conmutador.
  // 5v o 0v.
