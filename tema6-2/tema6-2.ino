

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(2) == LOW) {
  for (int i= 0; i < 256; i++) {
    Serial.print("Decimal: ");
    Serial.print(i, DEC);
    Serial.print(" Hexadecimal: ");
    Serial.print(i, HEX);
    Serial.print(" Binario: ");
    Serial.println(i, BIN);
  }
  delay(500);
}
}
