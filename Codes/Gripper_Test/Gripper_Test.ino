#include <Servo.h>

Servo Base;  // create servo object to control a servo
Servo Elbow;  // create servo object to control a servo
Servo Wrist;  // create servo object to control a servo
Servo Grip;  // create servo object to control a servo

// twelve servo objects can be created on most boards

int pos_B = 180 ;    // variable to store the servo position
int pos_E = 90 ;    // variable to store the servo position
int pos_R = 90 ;    // variable to store the servo position
int pos_G = 0;    // variable to store the servo position

void setup() {
  Base.attach(9);  // attaches the servo on pin 9 to the servo object
  // Elbow.attach(10);  // attaches the servo on pin 9 to the servo object
  // Wrist.attach(11);  // attaches the servo on pin 9 to the servo object
  // Grip.attach(3);  // attaches the servo on pin 9 to the servo object

  // delay(3000);
  // // delay(15);
  // Elbow.write(80);
  // // delay(15);
  // Wrist.write(90);
  // Grip.write(180);
  // Elbow.detach();  // attaches the servo on pin 9 to the servo object
  

}

void loop() {
  
  Base.write(90);
  delay(15);
  // Base.write(pos_B);
  // delay(1000);
  // Base.write(110);
  // delay(1000);
  // Elbow.write(pos_E);
  // delay(1000);
  // delay(1000);
  // Wrist.write(pos_R);
  // delay(1000);
  // Wrist.write(90);
  // delay(15);
  // Grip.write(pos_G);
  // delay(15);
//   delay(1000);
//   Grip.write(180);
//   delay(3000);
//  Grip.write(pos_G);
//   delay(3000);
//    Grip.write(180);
//   delay(3000);
//    Grip.write(pos_G);
//   delay(3000);


  // for (pos_G = 0; pos_G <= 180; pos_G += 1) { // goes from 0 degrees to 180 degrees
  //   Grip.write(pos_G);              // tell servo to go to position in variable 'pos'
  //   delay(15);                       // waits 15 ms for the servo to reach the position
  // }
  // for (pos_G = 180; pos_G >= 0; pos_G -= 1) { // goes from 180 degrees to 0 degrees
  //   Grip.write(pos_G);              // tell servo to go to position in variable 'pos'
  //   delay(15);                       // waits 15 ms for the servo to reach the position
  // }
}
