#include <Arduino.h>
//Declaring all variables as integers
int Z=1,Y=1,X=0;
int x0,x1,x2,x3,x4;
int f;

// the setup function runs once when you press reset or power the board
void setup() {
    pinMode(2, OUTPUT);  
}

// the loop function runs over and over again forever
void loop() {
  x0 = !X;
  x1 = !Y;
  x2 = (x1&&Z&&X);
  x3 = (x0&&Y&&Z);
   x4=x2||x3;
  f = x4;
  
digitalWrite(2,f);
}
//&& is the AND operation
// || is the OR operation
// ! is the NOT operation
