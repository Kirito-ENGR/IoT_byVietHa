#include <Arduino.h>
#define led 8
#define button 2
int dem =0;
void setup() {
  Serial.begin(9600);
  pinMode(button,INPUT_PULLUP);
  pinMode(led,OUTPUT);
}
void loop() {
  if(digitalRead(button)==0){
    dem++;
    Serial.print("gia tri bien dem: ");
    Serial.println(dem);
  }
  if(dem%2==1){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
}