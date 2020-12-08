#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "pgQjqZ2yAEqy_tsYiYu6v24_vtwMZ00S";
char ssid[] = "OPPO F7";
char pass[] = "12345678";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  
}

void loop()
{
  Blynk.run();
}
