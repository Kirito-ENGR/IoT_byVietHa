#include <Arduino.h>
#define led1 8
#define led2 9
#define button 2
unsigned long thoigian;
int logic_led1;
int dem=0;
void setup() {
  Serial.begin(9600);
  pinMode(button,INPUT_PULLUP);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}
void loop() {
  millis();
  if(millis()-thoigian >2000){
    logic_led1 =!logic_led1;
    digitalWrite(led1,logic_led1);
    thoigian=millis();
  }
  if(digitalRead(button)==0){
    digitalWrite(led2,HIGH);
    while(digitalRead(button)==0);
    Serial.println(++dem);
  }
  else{
    digitalWrite(led2,LOW);
  }
}