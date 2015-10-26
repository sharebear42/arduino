/* LizardWalk
  By: David French and Isaac Schumann
*/ 

#include <Servo.h> 
 
Servo myservo3;  // create servo object to control a servo 
Servo myservo9;
Servo myservo10;
Servo myservo11;
 
void setup() 
{ 
  myservo3.attach(3);  // links the pins to the servo objects
  myservo9.attach(9);  
  myservo10.attach(10);
  myservo11.attach(11);
} 
 
void loop() 
{ 
  // step motions are in separate functions to make sure the 
  // .. the servos have time to complete.
  legForward ();   
  delay(1000);
  legBack ();
  delay (1000);
} 

void legForward()
{
  myservo3.write (80);
  myservo9.write (80);
  myservo10.write (80);
  myservo11.write (80);
}
void legBack()
{
  myservo3.write (150);
  myservo9.write (150);
  myservo10.write (150);
  myservo11.write (150);
}


