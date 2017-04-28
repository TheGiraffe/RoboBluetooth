#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

long previousMillis = 0;

void mwahahaha()
{
  lcd.begin (16,2);  // initialize the lcd
}
void blah()  
{
unsigned long currentMillis = millis();
// Reset the display 
  lcd.clear();
  if (currentMillis-previousMillis>1000){
  lcd.home();
// Print on the LCD
  lcd.backlight();  
  lcd.setCursor(0,0); 
  lcd.print("Hello, world!");
  if (currentMillis-previousMillis>3000){
    
  lcd.setCursor(0,1);
  lcd.print("Love, Sophia");
  if (currentMillis-previousMillis>4000){
    
  lcd.setCursor(0,3);
  lcd.print("Your Worst Nightmare");
  if (currentMillis-previousMillis>6000){
  previousMillis=currentMillis;
  
  }
  
  }
  
  }
  
  }
   
}


