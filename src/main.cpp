#include <Arduino.h>
int led  = 13;
void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);
  delay(1000);
  Serial.println("nyala");
  digitalWrite(led,LOW);
  delay(1000);
  Serial.println("mati");
}