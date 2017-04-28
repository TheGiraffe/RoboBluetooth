#include <IRremote.h>  
 
const int irReceiverPin = 2;  
const int ledPin = 13;
 
IRrecv irrecv(irReceiverPin); 
decode_results results;    
 
void remotesetup()
{
  Serial.begin(9600);   
  irrecv.enableIRIn();   
}
 
void remoteloop() 
{
  if (irrecv.decode(&results)) {   
    Serial.print("irCode: ");            
    Serial.print(results.value, HEX); 
    Serial.print(",  bits: ");           
    Serial.println(results.bits); 
    irrecv.resume();    
  }  
  switch(results.value){
    case 16712445:
    
  }
}

