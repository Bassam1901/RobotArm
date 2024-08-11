#include <SoftwareSerial.h>
#include <Servo.h>

Servo Base;
Servo Elbow;
Servo Wrist;
Servo Gripper;

int Base_a = 120;
int Elbow_a = 90;
int Wrist_a = 90;
int Gripper_a = 90;
int blue = 0;

/* Create object named bt of the class SoftwareSerial */ 
SoftwareSerial bt(0,1); /* (Rx,Tx) */	

void setup() {
  bt.begin(9600);	/* Define baud rate for software serial communication */
  Serial.begin(9600);	/* Define baud rate for serial communication */
  // Base.attach(9);
  // Elbow.attach(10);
  // Wrist.attach(11);
  // Gripper.attach(3);
}

void loop() {
    blue = bt.read();
    
    if (bt.available())	/* If data is available on serial port */
    {
     Serial.write(bt.read());	/* Print character received on to the serial monitor */
    
      if (blue == '1') {
      Base.write(180);  // move the servo to 180 degrees
    }
      else if (blue == '3') {
      Base.write(0);  // move the servo to 0 degrees
    }
    // if (blue == 1 && Base_a != 180) {
    //   Serial.println("Base Going to 180");
    //   Base_a += 5;
    //   Base.write(Base_a);              // tell servo to go to Base_aition in variable 'Base_a'
    //   delay(20);
    //   }
    // else if(blue == 3 && Base_a != 0) {
    //   Serial.println("Base Going to 0");
    //   Base_a -= 5;
    //   Base.write(Base_a);              // tell servo to go to Base_aition in variable 'Base_a'
    //   delay(20);
    //   }

    }
}