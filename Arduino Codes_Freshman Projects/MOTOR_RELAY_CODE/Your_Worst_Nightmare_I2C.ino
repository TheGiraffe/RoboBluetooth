#include <Wire.h>
#include <LiquidCrystal_I2C.h>

void lcdsetup()
{
  lcd.begin (16,2);  // initialize the lcd
  lcd.clear();
}
void lcdloop()  
{

// Reset the display
  lcd.home();
 
// Print on the LCD
  lcd.backlight();  
  lcd.setCursor(0,0); 
  lcd.print("Ready");
  
}


