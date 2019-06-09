int numero = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
for (int i = 2; i < 10; i++) {
  pinMode(i, OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:

if (Serial.available() > 0) {
numero = Serial.parseInt();
for (int j = 2; j < 10; j++) {
  digitalWrite(j, LOW);
}
for (int k = 2; k < numero + 2; k++) {
  digitalWrite(k, HIGH);
}
Serial.print(numero);
}
}
