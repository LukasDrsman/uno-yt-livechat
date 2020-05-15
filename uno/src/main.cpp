#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

int width = 16;
int height = 2;
LiquidCrystal_I2C lcd(0x27, width, height);
char chr;
bool ndata = false;
int x = 0;
int y = 0;

void receiveChar() {
  if (Serial.available() > 0) {
    chr = Serial.read();
    ndata = true;
  }
}

void showChar() {
  if(ndata == true) {
    if(x < width && y < height) {
      lcd.print(chr);
      if(x >= (width-1) && y >= (height-1)) {
        lcd.clear();
        x = 0;
        y = 0;
      } else {
        if(x >= (width-1)) {
          x = 0;
          y = y + 1;
        } else {
          x = x + 1;
        }
      }
    }
    lcd.setCursor(x, y);
  }
  ndata = false;
}

void setup() {
  lcd.begin();
  lcd.clear();
  Serial.begin(9600);
  lcd.setCursor(0, 0);
  lcd.print("YTchat - ver 1.0");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.cursor_on();
}

void loop() {
  receiveChar();
  if(chr == 0) {
    lcd.clear();
    x = 0;
    y = 0;
    lcd.setCursor(x, y);
  } else {
    showChar();
  }
}
