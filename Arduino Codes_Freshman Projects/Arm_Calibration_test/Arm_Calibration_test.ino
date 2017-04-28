int solenoidvalve1=5;
int solenoidvalve2=4;
int solenoidvalve3=3;

void setup(){
pinMode(solenoidvalve1,OUTPUT);
pinMode(solenoidvalve2,OUTPUT);
pinMode(solenoidvalve3,OUTPUT);
digitalWrite(solenoidvalve1,HIGH);
digitalWrite(solenoidvalve2,HIGH);
digitalWrite(solenoidvalve3,HIGH);
}

void loop(){
digitalWrite(solenoidvalve1,LOW);
delay(2000);
digitalWrite(solenoidvalve1,HIGH);
delay(1000);
digitalWrite(solenoidvalve2,LOW);
delay(2000);
digitalWrite(solenoidvalve2,HIGH);
delay(1000);
digitalWrite(solenoidvalve3,LOW);
delay(2000);
digitalWrite(solenoidvalve3,HIGH);
delay(1000);
}
