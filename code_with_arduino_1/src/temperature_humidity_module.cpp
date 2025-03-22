#include <DHT.h>

// Define DHT11 pin and type
#define DHTPIN 2 // Change this to the desired digital pin
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void initTemperatureHumidity() {
  dht.begin(); // Initialize the DHT sensor
}

String getTemperatureAndHumidity() {
  float temperature = dht.readTemperature(); // Read temperature in Celsius
  float humidity = dht.readHumidity(); // Read humidity

  // Check if readings are valid
  if (isnan(temperature) || isnan(humidity)) {
    return "Error reading DHT!";
  }

  // Format the data as a string
  String data = "Temp: " + String(temperature) + "C  Hum: " + String(humidity) + "%";
  return data;
}
