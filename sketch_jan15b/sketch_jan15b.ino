#include <ThingerESP32.h>

#include <dummy.h>


#define USERNAME "fas268"
#define DEVICE_ID "fas268esp"
#define DEVICE_CREDENTIAL "26811030"

#define SSID "nyuguest"
#define SSID_PASSWORD ""

#define LED 2

int HALL = 0;

ThingerESP32 thing(USERNAME, DEVICE_ID, DEVICE_CREDENTIAL);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

  thing.add_wifi(SSID, SSID_PASSWORD);

  // digital pin control example (i.e. turning on/off a light, a relay, configuring a parameter, etc)
  thing["led"] << digitalPin(LED_BUILTIN);

  // resource output example (i.e. reading a sensor value)
  thing["millis"] >> outputValue(millis());
}

void loop() {
  thing.handle();
}
