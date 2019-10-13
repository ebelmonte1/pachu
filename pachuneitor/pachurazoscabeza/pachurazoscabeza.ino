
#include <Servo.h>
Servo cabeza;
Servo brazoder; 
Servo brazoizq;  // create servo object to control a servo
int pos = 0; 
int pos1 = 0; 
int pos2 = 0;  
void setup() 
{ 
brazoizq.attach(5);
brazoder.attach(3);
cabeza.attach(11);
} 
 
void loop() 
{ 
 for (pos = 45; pos <= 90; pos++) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    cabeza.write(pos);  
    delay(15); 
  
  }// tell servo to go to position in variable 'pos'

  for (pos = 90; pos >= 45; pos--) { // goes from 180 degrees to 0 degrees
    cabeza.write(pos); 
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos1 = 0; pos1 <= 180; pos1++) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    brazoder.write(pos1);
    cabeza.write(90);// tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos1 = 180; pos1 >= 0; pos1--) { // goes from 180 degrees to 0 degrees
    brazoder.write(pos1);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos2 = 0; pos2 <= 180; pos2++) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    brazoizq.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos2 = 180; pos2 >= 0; pos2--) { // goes from 180 degrees to 0 degrees
    brazoizq.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  
} 
