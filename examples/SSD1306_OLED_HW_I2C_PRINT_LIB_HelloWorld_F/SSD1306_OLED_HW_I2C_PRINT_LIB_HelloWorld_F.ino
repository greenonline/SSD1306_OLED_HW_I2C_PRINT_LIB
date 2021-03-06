// Small_SSD1306_Print_8x16_HelloWorld_F.ino
// Prints "Hello World" using string in Flash F()
//
// connect display SCL to pin A5, and SDA to pin A4
// connect LED to pin 4 (it will blink in case of I2C error)

#include <Small_SSD1306_Print_8x16.h>

Small_SSD1306_Print_8x16 lcd = Small_SSD1306_Print_8x16();

void setup() {
  lcd.begin();
  lcd.setCursorMode(true);
}

void loop() {
  printHelloWorld();
  delay(2000);
  scrollHelloWorld();
  lcd.setPrint8x16CharacterMode(false);
  printHelloWorld();
  delay(2000);
  scrollHelloWorld();
  lcd.setPrint8x16CharacterMode(true);
}

void printHelloWorld(){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(F("Hello"));
  lcd.setCursor(10,1);
  lcd.print(F("World"));
}

void scrollHelloWorld(){
  lcd.clear();
  for (int x=0;x<11;x++)
    for (int y=0;y<3;y++){
      lcd.setCursor(x,y);
      lcd.print(" Hello ");
      lcd.setCursor(x+1,y+1);
      lcd.print(" World ");
      delay(100);
    }
}
