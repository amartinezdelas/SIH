int outPin[] = {13, 12, 11, 10, 9, 8};
 
int delayValue = 1000;
 
void setup()
{
  int i = 0;
  for ( i = 0; i < 6; i++)
    pinMode(outPin[i], OUTPUT);
}
 
void loop()
{
 
  int i = 0, j=0;
 
  for ( i = 0; i < 64; i++)
  {
     for ( j = 0; j < 6; j++)
     {
       if ( ( (i >> j) & 1 )  == 1 )
           digitalWrite(outPin[j], HIGH);
       else digitalWrite(outPin[j], LOW);
     }
     delay(delayValue);
  }
}
