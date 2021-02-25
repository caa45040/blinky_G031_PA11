#include <Arduino.h>

#define led1 PA11
#define led2 PA12
#define in7 PB7

void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  //pinMode(led2,OUTPUT);
  //pinMode(led3,OUTPUT);
  //pinMode(in7,INPUT);
}

//int a;

void loop() {
    //a=digitalRead(in7);
    digitalWrite(led1,1);
    //digitalWrite(led2,0);
    //digitalWrite(led3,1);
    delay(1000);

    digitalWrite(led1,0);
    //digitalWrite(led2,1);
    //digitalWrite(led3,0);
    delay(1000);
}
