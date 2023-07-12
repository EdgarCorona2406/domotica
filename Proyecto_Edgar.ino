#include <DHT.h>






int SENSOR = 2; int temp, humedad;

DHT dht (SENSOR, DHT11);

void setup()
{
  Serial.begin(9680);
  dht. begin();
}

void loop()
{
  humedad - dht. readHumidity();
  temp = dht. readTemperature();


  Serial.println(temp);
  //Serial.println(humedad);
  delay(500);
}
