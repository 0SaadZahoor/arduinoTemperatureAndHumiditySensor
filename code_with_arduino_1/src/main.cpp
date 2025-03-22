#include <Arduino.h>
#include "serial_monitor.h" // Include the serial monitor header

// Function declarations
void initDisplay();
void displayMessage(const char* message);
void scrollMessageLeft();
void initTemperatureHumidity();
String getTemperatureAndHumidity();
void initSerialMonitor();
void displayOnSerialMonitor(const char* message);
void displayTimeSinceLastReading(); // Function declaration for time tracking

void setup() {
  // Initialize modules
  initDisplay();
  initTemperatureHumidity();
  initSerialMonitor(); // Initialize the serial monitor

  // Display initial message
  String temperatureAndHumidityData = getTemperatureAndHumidity();
  displayMessage(temperatureAndHumidityData.c_str());
  displayOnSerialMonitor(temperatureAndHumidityData.c_str()); // Display on serial monitor
}

void loop() {
  // Scroll the message to the left
  scrollMessageLeft();

  // Update the message after scrolling
  String temperatureAndHumidityData = getTemperatureAndHumidity();
  displayMessage(temperatureAndHumidityData.c_str());
  displayOnSerialMonitor(temperatureAndHumidityData.c_str()); // Display on serial monitor

  // Display the time since the last reading
  displayTimeSinceLastReading();

  // Add a delay before the next scrolling cycle
  delay(6000); // Adjusted delay to 6000 ms to make total time 10 seconds
}
