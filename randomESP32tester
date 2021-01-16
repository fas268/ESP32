#include <dummy.h>

#define LED 2

int HALL = 0;

void setup() {
  Serial.begin(115200);
  pinMode(LED,OUTPUT);
}

void loop() {
  delay(5);
  HALL = hallRead();
  delay(500);
  digitalWrite(LED,HIGH);
  Serial.println(HALL);
  delay(500);
  digitalWrite(LED,LOW);
}
