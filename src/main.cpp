#include <Arduino.h>
#define led1 6
#define led2 7
int logic1 ;
int logic2 ;
int dem = 0;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}
void loop() {
  dem++;
  delay(1000);
  logic1 = !logic1;
  digitalWrite(led1, logic1);
  if(dem ==3){
    logic2 = !logic2;
    digitalWrite(led2, logic2);
    dem = 0;
  }
}