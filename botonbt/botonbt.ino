#include <SoftwareSerial.h>
SoftwareSerial BT(10, 11); //10 RX, 11 TX.
int led = 3;


void setup() {
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  while (BT.available() > 0)    {
switch (BT.read()) {
  case '1':
  digitalWrite(led, HIGH);
  break;
  case '2':
  digitalWrite(led, LOW);
  break;
}

  }
}
