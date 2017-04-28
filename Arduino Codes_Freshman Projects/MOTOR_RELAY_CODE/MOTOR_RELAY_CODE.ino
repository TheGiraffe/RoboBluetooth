
int motor1=5;
int motor2=4;
int reverse=3;

void setup()
{
  lcdsetup();
  remotesetup();
  Serial.begin(9600);
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
  pinMode(reverse,OUTPUT);
  digitalWrite(motor1,HIGH);
  digitalWrite(motor2,HIGH);
  digitalWrite(reverse,HIGH);
}

void loop(){
  remoteloop();
}
