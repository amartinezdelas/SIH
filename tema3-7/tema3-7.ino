const int a = 2; // definimos el pin que va a ser cada segmento del display
const int b = 3; // el display usado es de catodo común, con el común a GND
const int c = 4;
const int d = 5;
const int e = 6;
const int f = 7;
const int g = 8;
int cuenta = 0;

void numero() { // funcion que va a representar el número deseado en el display
switch(cuenta) {
  case 0:
    digitalWrite(a, HIGH);                // encendido número 0
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    break;
   case 1:
    digitalWrite(a, LOW);                 // encendido número 1
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    break;
   case 2:
    digitalWrite(a, HIGH);                // encendido número 2
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    break;
   case 3:
    digitalWrite(a, HIGH);                // encendido número 3
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    break;
   case 4:
    digitalWrite(a, LOW);                // encendido número 4
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;
   case 5:
    digitalWrite(a, HIGH);                // encendido número 5
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;
   case 6:
    digitalWrite(a, HIGH);                // encendido número 6
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;
   case 7:
    digitalWrite(a, HIGH);                // encendido número 7
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    break;
   case 8:
    digitalWrite(a, HIGH);                // encendido número 8
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;
   case 9:
    digitalWrite(a, HIGH);                // encendido número 9
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    break;
}
}


void setup() {
  // put your setup code here, to run once:
pinMode(a, OUTPUT);
pinMode(b, OUTPUT);
pinMode(c, OUTPUT);
pinMode(d, OUTPUT);
pinMode(e, OUTPUT);
pinMode(f, OUTPUT);
pinMode(g, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  numero();
cuenta++;          // aumentamos la cuenta en 1
  if(cuenta > 9) { // cuando se pase de 9, vuelve al 0
    cuenta = 0;
}
}
