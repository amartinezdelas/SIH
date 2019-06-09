int numero = 1;
int retardo = 100;

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
    if (numero == 0) {
      numero = 1;
    }
    if (numero >= 10) {
      numero = 9;
    }
    Serial.print(numero);
  }
    switch (numero) {
     case 1:
      retardo = 2000;
      break;
    case 2:
      retardo = 1000;
      break;
    case 3:
      retardo = 900;
      break;
    case 4:
      retardo = 750;
      break;
    case 5:
      retardo = 500;
      break;
    case 6:
      retardo = 400;
      break;
    case 7:
      retardo = 300;
      break;
    case 8:
      retardo = 200;
      break;
    case 9:
      retardo = 100;
      break;
    default:
      break;
  }
  while (Serial.available() == 0) {
    for (int j = 2; j < 10; j++) {
      digitalWrite(j, LOW);
    }
    delay(retardo);
    for (int k = 2; k < 10 + 2; k++) {
      digitalWrite(k, HIGH);
    }
    delay(retardo);
  }

}
