#include <Arduino.h> // Include Arduino core library for delay()
#include <LiquidCrystal.h>

// Define pins for LCD
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void initDisplay() {
  lcd.begin(16, 2); // Set up the LCD's number of columns and rows
}

void displayMessage(const char* message) {
  lcd.clear(); // Clear the display
  lcd.print(message); // Print the message to the LCD
}

void scrollMessageLeft() {
  for (int i = 0; i < 10; i++) { // Scroll 10 times (adjust based on message length)
    lcd.scrollDisplayLeft(); // Scroll the display to the left
    delay(400); // Adjusted delay to 400 ms to reduce total scrolling time
  }
}
