#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup()
{
  lcd.begin (16,2);  // initialize the lcd
}
void loop()  
{

// Reset the display 
  lcd.clear();
  delay(1000);
  lcd.home();
 
// Print on the LCD
  lcd.backlight();  
  lcd.setCursor(0,0); 
  lcd.print("Hello, world!");
  delay(1000);
  
  lcd.setCursor(0,1);
  lcd.print("Love, Sophia");
  delay(2000);
  
  lcd.setCursor(0,3);
  lcd.print("Your Worst Nightmare");
  delay(4000);
  
}


