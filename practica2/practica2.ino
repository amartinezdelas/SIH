byte ledrojo = 13, ledverde = 11, ledamarillo = 12;

void parpadeo(int i, byte colorled, int encendido, int apagado) {
  int j=0;
  while (j<i){
  digitalWrite(colorled, HIGH); delay(encendido); digitalWrite(colorled, LOW); delay(apagado);
  j++;
  }
}

void setup() {
  // initialize digital pin 13 as an output.

  pinMode(ledrojo, OUTPUT);
  pinMode(ledamarillo, OUTPUT);
  pinMode(ledverde, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  parpadeo(1, ledverde, 10000, 0);
  parpadeo(3, ledamarillo, 1000, 1000);
  parpadeo(1, ledrojo, 10000, 0);

}
