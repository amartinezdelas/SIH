byte ledrojo = 13, ledverde = 11, ledamarillo = 12, ledrojo2 = 7, ledamarillo2 = 6, ledverde2 = 5;
void parpadeo(int i, byte colorled, int encendido, int apagado) {
  int j=0;
  while (j<i){
  digitalWrite(colorled, HIGH); delay(encendido); digitalWrite(colorled, LOW); delay(apagado);
  j++;
  }
}
void setup() {
  // put your setup code here, to run once:
  pinMode(ledrojo, OUTPUT);
  pinMode(ledamarillo, OUTPUT);
  pinMode(ledverde, OUTPUT);
  pinMode(ledrojo2, OUTPUT);
  pinMode(ledamarillo2, OUTPUT);
  pinMode(ledverde2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledrojo2, HIGH);
parpadeo(1, ledverde, 10000, 0);
parpadeo(3, ledamarillo, 500, 500);
digitalWrite(ledrojo2, LOW);
digitalWrite(ledrojo, HIGH);
parpadeo(1, ledverde2, 10000, 0);
parpadeo(3, ledamarillo2, 500, 500);
digitalWrite(ledrojo, LOW);
}
