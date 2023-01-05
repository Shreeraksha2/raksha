#define BLUNK TEMPLATE 1D "TemplateID" #define BLYNK_DEVICE_NAME "Device Name" #define BLYNK AUTH_TOKEN "Auth Token"

#define BLUNK PRINT Serial #include <ESP8266WiFi.h>

#include <Blynk SimpleEsp8266.h>

char auth) BLYNK_AUTH_TOKEN:

char ssid "Wifi Username"; // Enter your Wifi Username char pass() = "Wifi Password"; // Enter your Wifi password

int ledpin = D4:

void setup()

{

Serial.begin(115200);

Blynk.begin(auth, ssid, pass):

pinMode(ledpin, OUTPUT);

}

void loop()
{

Blynk.run();

}