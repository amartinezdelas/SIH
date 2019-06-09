const int pausa = 500;   // El tiempo que permanece encendido cada led 

     void setup() {
             // inicializamos los pines del 4 al 11 como OUTPUT con un ciclo for
             for (int pinLed = 4; pinLed < 12; pinLed++)  {
               pinMode(pinLed, OUTPUT);      
             }
           }

           void loop() {
       // encendemos y apagamos en un loop desde el pin menor 4 al mayor 10
       for (int pinLed = 4; pinLed < 12; pinLed++) { 
         // pone el pinLed en HIGH encendiendo el led
         digitalWrite(pinLed, HIGH);   
         delay(pausa);                  
         // pone el pinLed en LOW apagando el led
         digitalWrite(pinLed, LOW);    
             }

       delay(pausa);                  

       // encendemos y apagamos en otro loop desde el pin mayor 10 al pin menor 4 
       for (int pinLed = 11; pinLed > 3; pinLed--)   { 
         // pone el pinLed en HIGH encendiendo el led
         digitalWrite(pinLed, HIGH);
         delay(pausa);
         // pone el pinLed en LOW apagando el led
         digitalWrite(pinLed, LOW);
       }

             delay(pausa);

     }
