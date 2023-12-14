#include<boltiot.h>
//#include <BoltIoT-Arduino-Helper.h>



#ifndef API_KEY
#define API_KEY   "a2e033cb-3f5f-4aed-8280-fb08572d5937"
#endif
#ifndef DEVICE_ID
#define DEVICE_ID "BOLT9097656"
#endif
int echo = 7;
int trig = 6;

float duration;
float distance;

void setup() {
  // put your setup code here, to run once:
  boltiot.Begin(Serial);
  pinMode(7,INPUT);
  pinMode(6,OUTPUT);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration = pulseIn(echo,HIGH);
  distance = duration * 0.017;
  boltiot.processPushDataCommand(distance);
  
  delay(2000);
  
  
  
  
  
    
    
  

}
