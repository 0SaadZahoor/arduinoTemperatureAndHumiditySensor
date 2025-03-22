#ifndef SERIAL_MONITOR_H
#define SERIAL_MONITOR_H

#include <Arduino.h>

// Function to initialize the Serial Monitor
void initSerialMonitor();

// Inline function to display a message on the Serial Monitor
inline void displayOnSerialMonitor(const char* message) {
  Serial.println(message); // Print the message to the Serial Monitor
}

#endif // SERIAL_MONITOR_H
