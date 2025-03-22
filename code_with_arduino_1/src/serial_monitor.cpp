#include <Arduino.h>
#include "serial_monitor.h"

void initSerialMonitor() {
  Serial.begin(9600); // Initialize the Serial Monitor at 9600 baud rate
}
