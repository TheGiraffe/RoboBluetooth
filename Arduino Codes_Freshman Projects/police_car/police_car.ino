const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;
const int buzzerPin = 3;
int fre;

long previousMillis = 0;
long buzzerMillis = 0;

long interval1 = 400;
long interval2 = 300;
long interval3 = 100;
long firstbuzzerpause = 5;
long secondbuzzerpause = 4000;
long thirdbuzzerpause = 10;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void alarm(){
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis > interval1){
    previousMillis=currentMillis;
    color(0,0,0);
  } else if (currentMillis - previousMillis > interval2){
    color(255,255,255);
  }else if (currentMillis - previousMillis > interval3){
  color(255,0,0);
  }}
void buzzz(){
unsigned long yeahMillis = millis();
int keepcountin = 200;
int hit600 = false;

if(yeahMillis-buzzerMillis >firstbuzzerpause && keepcountin<600 && hit600==false){
keepcountin++;
buzzerMillis=yeahMillis;
} else if (hit600==false && keepcountin==600){
  if(yeahMillis-buzzerMillis<secondbuzzerpause){
  keepcountin=600;
  }else{
  keepcountin=599;
  buzzerMillis=yeahMillis;
  hit600=true;
  }
}else if(yeahMillis-buzzerMillis>thirdbuzzerpause && keepcountin<=600 && hit600==true){
keepcountin--;
buzzerMillis=yeahMillis;
}else if (hit600==true && keepcountin==200){
  if(yeahMillis-buzzerMillis<secondbuzzerpause){
    keepcountin=200;
  }else{
  keepcountin=201;
  buzzerMillis=yeahMillis;
  hit600=false;
  }
}
tone(3, keepcountin);
}

 void loop()
  {
    alarm();
    buzzz();
  }
  
  
  void color(unsigned char red, unsigned char green, unsigned char blue)
  {
        analogWrite(redPin, red);
        analogWrite(bluePin, blue);
        analogWrite(greenPin,green);
  }
