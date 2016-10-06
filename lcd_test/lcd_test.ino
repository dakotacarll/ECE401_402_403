
/*
 The circuit:
 * LCD RS pin to digital pin 2
 * LCD Enable pin to digital pin 3
 * LCD D4 pin to digital pin 9
 * LCD D5 pin to digital pin 10
 * LCD D6 pin to digital pin 11
 * LCD D7 pin to digital pin 22
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

*/
// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(2, 3, 9, 10, 11, 12);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16,2);
 
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(7, OUTPUT);
  
}

void loop()
{
  lcd.print("Current          ");
  lcd.setCursor(10, 0);
  lcd.print("0.550A");
  
  lcd.setCursor(0, 1);
  //         ----------------
  lcd.print("Voltage      ");  
  lcd.setCursor(12, 1);
  lcd.print("2.4V");
  delay(500); 

  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second


}

