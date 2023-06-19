#include <dht.h>

#include <Wire.h>

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

dht DHT; #define DHT11_PIN 4

void setup(){

lcd.begin(16, 2); }

void loop() {

int d = DHT.read11(DHT11_PIN);

lcd.setCursor(0,0);

lcd.print("Temp: ");

lcd.print(DHT.temperature);

lcd.print((char)223);

lcd.print("C");

lcd.setCursor(0,1);

lcd.print("Humidity: ");

lcd.print(DHT.humidity);

lcd.print("%");

delay(1000);

}