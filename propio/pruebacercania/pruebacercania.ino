long distancia;
int buzzer = 13 ;// setting controls the digital IO foot buzzer
long tiempo;

void parpadeo() {
  unsigned char i, j ;// define variables
  for (i = 0; i < 80; i++) // Wen a frequency sound
  {
    digitalWrite (buzzer, HIGH) ;// send voice
    delay (1) ;// Delay 1ms
    digitalWrite (buzzer, LOW) ;// do not send voice
    delay (1) ;// delay ms
  }

}

void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT); /*activación del pin 9 como salida: para el pulso ultrasónico (Trig en el sensor)*/
  pinMode(8, INPUT); /*activación del pin 8 como entrada: tiempo del rebote del ultrasonido (echo en el sensor)*/
  pinMode(2, OUTPUT);
  pinMode (buzzer, OUTPUT) ;
}

void loop() {
  digitalWrite(9, LOW); /* Por cuestión de estabilización del sensor*/
  delayMicroseconds(5);
  digitalWrite(9, HIGH); /* envío del pulso ultrasónico*/
  delayMicroseconds(10);
  tiempo = pulseIn(8, HIGH); /* Función para medir la longitud del pulso entrante. Mide el tiempo que transcurrido entre el envío
  del pulso ultrasónico y cuando el sensor recibe el rebote, es decir: desde que el pin 12 empieza a recibir el rebote, HIGH, hasta que
  deja de hacerlo, LOW, la longitud del pulso entrante*/
  distancia = int(0.017 * tiempo); /*fórmula para calcular la distancia obteniendo un valor entero*/
  /*Monitorización en centímetros por el monitor serial*/
  Serial.println("Distancia ");
  Serial.println(distancia);
  Serial.println(" cm");
  if (distancia < 100) {
    parpadeo();
    delay(distancia * 5);
  }

}
