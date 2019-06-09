const int gasPin = A0; //GAS sensor output pin to Arduino analog A0 pin
int calibre = 0;
int lectura = 0;
#define led 13
#define altavoz 11

void setup()
{
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);
  Serial.begin(9600); //Initialize serial port - 9600 bps
  pinMode(altavoz, OUTPUT);
    delay(300000);
    digitalWrite(led, LOW);
  calibre = analogRead(gasPin);
  tone (altavoz, 500, 200);
  delay(500);
  tone (altavoz, 500, 200);
  delay(500);
  tone (altavoz, 500, 200);
}

void loop()
{

  Serial.println(analogRead(gasPin));
  delay(1000); // Print value every 1 sec.
  while (analogRead(gasPin) >= calibre + 30) {
    tone (altavoz, 1000);
    Serial.println(analogRead(gasPin));
    delay(500);
  }
  noTone (11);
}

