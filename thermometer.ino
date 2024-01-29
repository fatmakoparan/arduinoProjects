#include <LiquidCrystal_I2C.h>
#include <Wire.h>
int sensorPin=A0;
int sensorDeger=0;
float gerilim =0;
float sicaklik=0;
LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  sensorDeger=analogRead(sensorPin);
  gerilim=(sensorDeger/1024.0)*5000.0;
  sicaklik=gerilim/10.0;
  lcd.setCursor(3,0);
  lcd.print("sicaklik");
  lcd.setCursor(3,1);
  lcd.print(sicaklik);
  }
