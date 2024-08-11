#include <SoftwareSerial.h>
#include <Servo.h>

Servo Base;  // create servo object to control a Base
Servo Wrist;  // create servo object to control a Wrist
Servo Elbow;  // create servo object to control a Elbow
Servo Gripper;  // create servo object to control a Gripper

int BasePin= 9;  // Declare the Servo pin 9
int ElbowPin= 10;  // Declare the Servo pin 10
int WristPin= 11;  // Declare the Servo pin 11
int GripperPin= 3;  // Declare the Servo pin 12

int Base_a = 90;
int Elbow_a = 90;
int Wrist_a = 90;
int Gripper_a = 90;
char Bluetooth;

SoftwareSerial bt(0,1); 

void setup() {
  bt.begin(9600);
  Serial.begin(9600);
      //Attaching Servos to Pins
      Base.attach(BasePin);
      Elbow.attach(ElbowPin);
      Wrist.attach(WristPin);
      Gripper.attach(GripperPin);
      //Initializing the Angles
      Base.write(Base_a);
      Elbow.write(Elbow_a);
      Wrist.write(Wrist_a);
      Gripper.write(Gripper_a);

}

void loop() {
    Bluetooth=bt.read();

    // Controlling Servos By Bluetooth Output
    if (Bluetooth == '1' && Base_a < 180) {
   
      Base_a +=1;
      delay(15);
      Base.write(Base_a);
      delay(15);
      Serial.print("Base_a = ");
      Serial.println(Base_a);
      
    }
    else if (Bluetooth == '2' && Base_a > 0) {

      Base_a -=1;
      delay(15);
      Base.write(Base_a);
      delay(15);
      Serial.print("Base_a = ");
      Serial.println(Base_a);
      
      }
      
    else if (Bluetooth == '3' && Elbow_a < 180) {

      Elbow_a +=1;
      delay(15);
      Elbow.write(Elbow_a);
      delay(15);
      Serial.print("Elbow_a = ");
      Serial.println(Elbow_a);
      
      }
    else if (Bluetooth == '4' && Elbow_a > 0) {

      Elbow_a -=1;
      delay(15);
      Elbow.write(Elbow_a);
      delay(15);
      Serial.print("Elbow_a = ");
      Serial.println(Elbow_a);
      
      }
    else if (Bluetooth == '5' && Wrist_a < 180) {

      
      Wrist_a +=1;
      delay(15);
      Wrist.write(Wrist_a);
      delay(15);
      Serial.print("Wrist_a = ");
      Serial.println(Wrist_a);
      
      }

    else if (Bluetooth == '6' && Wrist_a > 0) {

      
      Wrist_a -=1;
      delay(15);
      Wrist.write(Wrist_a);
      delay(15);
      Serial.print("Wrist_a = ");
      Serial.println(Wrist_a);
      
      }
    else if (Bluetooth == '7') {

      
      Gripper_a = 180;
      delay(15);
      Gripper.write(Gripper_a);
      delay(15);
      Serial.print("Gripper_a = ");
      Serial.println(Gripper_a);
      
      }
    else if (Bluetooth == '8') {

      
      Gripper_a = 0;
      delay(15);
      Gripper.write(Gripper_a);
      delay(15);
      Serial.print("Gripper_a = ");
      Serial.println(Gripper_a);
      
      }
  }