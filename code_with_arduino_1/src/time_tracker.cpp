#include <Arduino.h>
#include "time_tracker.h"

static unsigned long lastReadingTime = 0; // Track the time of the last reading

void displayTimeSinceLastReading() {
  unsigned long currentTime = millis(); // Get the current time in milliseconds
  unsigned long timeSinceLastReading = (currentTime - lastReadingTime) / 1000;

  Serial.print("Time since last reading: ");
  Serial.print(timeSinceLastReading);
  Serial.println(" seconds");

  // Update the last reading time
  lastReadingTime = currentTime;
}
