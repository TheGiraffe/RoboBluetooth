#include <IRremote.h>  
 
const int irReceiverPin = 2;  
 
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
    Serial.print(results.value, DEC); 
    Serial.print(",  bits: ");           
    Serial.println(results.bits); 
    irrecv.resume();    
  } 
  delay(600);
    switch(results.value){
    case 16712445:
    ledloopmotors();
    digitalWrite(reverse,HIGH);
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,LOW);
    break;
    case 16748655:
    ledloopmotors();
    digitalWrite(motor2,HIGH);
    digitalWrite(reverse,HIGH);
    digitalWrite(motor1,LOW);
   break;
   case 16754775:
   ledloopmotors();
   digitalWrite(motor1,HIGH);
   digitalWrite(reverse,HIGH);
   digitalWrite(motor2,LOW);
   break;
   case 16761405:
   ledloopmotors();
   digitalWrite(motor1,HIGH);
   digitalWrite(motor2,HIGH);
   digitalWrite(reverse,LOW);
   break;
   case 4294967295:
   ledloopnormal();
    digitalWrite(motor1,HIGH);
   digitalWrite(motor2,HIGH);
   digitalWrite(reverse,HIGH);
   break;
   case 16724175:
   ledlooptemperature();
   digitalWrite(motor1,HIGH);
   digitalWrite(motor2,HIGH);
   digitalWrite(reverse,HIGH);
   temperaturesensorloop();
   break;
   case 16753245:
   ledloopnormal();
   digitalWrite(motor1,HIGH);
   digitalWrite(motor2,HIGH);
   digitalWrite(reverse,HIGH);
   break;
   default:
   ledloopnormal();
   break;
 }
  }

