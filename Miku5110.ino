#include <Nokia_LCD.h>
#include "miku_f1.h"
#include "miku_f2.h"
#include "miku_f3.h"

//pinout for ESPDUINO-32 board
Nokia_LCD lcd(18 /* CLK */, 23 /* DIN */, 5 /* DC */, 19 /* CE */, 13 /* RST */, 12 /* BL */);

void setup() {
  // Initialize the screen
  lcd.begin();
  // Turn on the backlight
  lcd.setBacklight(true);
  // Set the contrast
  lcd.setContrast(60);  // Good values are usualy between 40 and 60
  // Clear the screen by filling it with black pixels
  lcd.clear(true);
  delay(1000);
  // Draw the platis.solutions logo on your screen
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.draw(miku_f1, sizeof(miku_f1) / sizeof(miku_f1[0]), true);
  delay(300);
  lcd.draw(miku_f2, sizeof(miku_f2) / sizeof(miku_f2[0]), true);
  delay(150);
  lcd.draw(miku_f3, sizeof(miku_f3) / sizeof(miku_f3[0]), true);
  delay(300);
  lcd.draw(miku_f2, sizeof(miku_f2) / sizeof(miku_f2[0]), true);
  delay(150);
}