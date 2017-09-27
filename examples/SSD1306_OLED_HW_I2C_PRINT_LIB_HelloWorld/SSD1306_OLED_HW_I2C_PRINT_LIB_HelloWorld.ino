// SSD1306_OLED_HW_I2C_PRINT_LIB.ino
// Prints "Hello World"
//
// connect display SCL to pin A5, and SDA to pin A4
// connect LED to pin 4 (it will blink in case of I2C error)


#include <SSD1306_OLED_HW_I2C_PRINT_LIB.h>

SSD1306_OLED_HW_I2C_PRINT_LIB lcd = SSD1306_OLED_HW_I2C_PRINT_LIB();

void setup(void) {
    lcd.D_INIT();       // Initialize OLED
}


void loop(void) {
  lcd.D_CLEAR();
  lcd.D_SETPOS(0,0);;         // Set position
  lcd.print('H');         // Print 'H'
  lcd.D_SETPOS(8,0);;         // Set position
  lcd.print("ello");         // Print 'ello'
  delay(2000);
  lcd.D_CLEAR();
  lcd.D_SETPOS(0,2);;         // Set position
  lcd.print('W');         // Print 'W'
  lcd.D_SETPOS(8,2);;         // Set position
  lcd.print("orld");         // Print 'orld'
  delay(2000);
}
