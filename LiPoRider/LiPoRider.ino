/*
  Liporider testing
  
 */

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
#include <Time.h>




// the setup routine runs once when you press reset:
void setup() {
  setTime(12,5,5,21,4,2014); // Another way to set

  Serial.begin(115200);
  
}
//battery A1
//solar cell A0

// the loop routine runs over and over again forever:
void loop() {
  
 Serial.print(now());Serial.print(",");
  
  Serial.print(((float)analogRead(A0)/1024.0)*5.0);
  Serial.print(",");
  Serial.println(((float)analogRead(A1)/1024.0)*5.0);
  delay(1000);
}
