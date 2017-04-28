int pinArray[] = {
  8, 7, 6, 5, 4, 3, 2, 1};
int count = 0;
int timer = 50;

void setup(){
  for (count=0;count<10;count++) {
    pinMode(pinArray[count], OUTPUT);
  }
}

void loop() {
  for (count=0;count<11;count++) {
    digitalWrite(pinArray[count], HIGH);
    delay(timer);
    digitalWrite(pinArray[count + 1], HIGH);
    delay(timer);
    digitalWrite(pinArray[count], LOW);
    delay(timer*2);
  }
  for (count=10;count>0;count--) {
    digitalWrite(pinArray[count], HIGH);
    delay(timer);
    digitalWrite(pinArray[count - 1], HIGH);
    delay(timer);
    digitalWrite(pinArray[count], LOW);
    delay(timer*2);
  }
}

