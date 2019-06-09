char caracter;
int numero;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() == 0) {}
  caracter = Serial.read();
  switch (caracter) {
    case '0':
      numero = 0;
      break;
    case '1':
      numero = 1;
      break;
    case '2':
      numero = 2;
      break;
    case '3':
      numero = 3;
      break;
    case '4':
      numero = 4;
      break;
    case '5':
      numero = 5;
      break;
    case '6':
      numero = 6;
      break;
    case '7':
      numero = 7;
      break;
    case '8':
      numero = 8;
      break;
    case '9':
      numero = 9;
      break;
    default:
      break;
  }
  for (int i = 0; i < numero; i++) {
    tone(3, 1000, 500);
    delay(750);
  }
}
