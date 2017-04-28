#include <IRremote.h>  
 
const int irReceiverPin = 2;  
const int ledPin = 13;
unsigned long nowMillis=millis();
 
IRrecv irrecv(irReceiverPin); 
decode_results results;    
 
void meow()
{
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);   
  irrecv.enableIRIn();
}
 
void woof() 
{
  if (irrecv.decode(&results)) {   
    Serial.print("irCode: ");            
    Serial.print(results.value, DEC); 
    Serial.print(",  bits: ");           
    Serial.println(results.bits); 
    irrecv.resume();    
  }  
  
  switch (results.value){
  case 16720605:
  digitalWrite(ledPin,HIGH);
  break;
  
  case 16753245:
  digitalWrite(ledPin,LOW);
  break;
  
  case 16724175:
  long beforeMillis = previousMillis;
  lcd.clear();
  if(nowMillis-beforeMillis>1000){
  lcd.home();
  
  lcd.setCursor(0,0);
  lcd.print("Type In Code");
  lcd.setCursor(0,3);
  lcd.print("1");
  break;
  }
  }
  
  
  }



