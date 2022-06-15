// --- DHT ---
#include <DHT.h>
#define DHTPIN D3
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
int humidity;
int temperature;

void setup() {
  Serial.begin(9600);
  dht.begin();
  //configurarDisplay();
}

void loop() {
  measureTemperatureHumidity();
  showTemperatureHumidity();
  delay(6000);
}

void showTemperatureHumidity() {
  Serial.print("Temperature ");
  Serial.print(temperature);
  Serial.print(" C -::- Humidity ");
  Serial.print(humidity);
  Serial.println(" %");
}

void measureTemperatureHumidity() {
  humidity = dht.readHumidity();
  temperature = dht.readTemperature(false);
  delay(5000);
}
