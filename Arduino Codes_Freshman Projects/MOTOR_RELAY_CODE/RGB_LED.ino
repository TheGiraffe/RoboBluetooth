const int redPin = 10;
const int greenPin =9;
const int bluePin = 8;
const int buzzerPin = 11;
int fre;

long previousMillis = 0;

long interval1 = 400;
long interval2 = 300;
long interval3 = 100;

void ledsetup(){
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}
void ledloopmotors(){
unsigned long currentMillis = millis();
  if (currentMillis - previousMillis > interval1){
    previousMillis=currentMillis;
    color(0,206,208);
  } else if (currentMillis - previousMillis > interval2){
    color(0,255,0);
  }else if (currentMillis - previousMillis > interval3){
  color(0,3,128);
  }
}
void ledloopnormal(){
  unsigned long currentMillis = millis();
 if (currentMillis - previousMillis > interval1){
    previousMillis=currentMillis;
    color(46,138,87);
  } else if (currentMillis - previousMillis > interval2){
    color(220,20,60);
  }else if (currentMillis - previousMillis > interval3){
  color(0,100,0);
  }
}
void ledlooptemperature(){
  unsigned long currentMillis = millis();
 if (currentMillis - previousMillis > interval1){
    previousMillis=currentMillis;
    color(255,140,0);
  } else if (currentMillis - previousMillis > interval2){
    color(0,128,128);
  }else if (currentMillis - previousMillis > interval3){
  color(255,255,0);
  }
}
  void color(unsigned char red, unsigned char green, unsigned char blue)
  {
        analogWrite(redPin, red);
        analogWrite(bluePin, blue);
        analogWrite(greenPin,green);
  }
