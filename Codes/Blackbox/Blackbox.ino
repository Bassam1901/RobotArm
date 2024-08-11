#include <SoftwareSerial.h>
#include <Servo.h>

Servo Base;  // create servo object to control a servo
Servo Wrist;  // create servo object to control a servo
Servo Elbow;  // create servo object to control a servo
Servo Gripper;  // create servo object to control a servo

int BasePin= 9;  // Declare the Servo pin
int ElbowPin= 10;  // Declare the Servo pin
int WristPin= 11;  // Declare the Servo pin
int GripperPin= 3;  // Declare the Servo pin

int Base_a = 90;
int Elbow_a = 90;
int Wrist_a = 90;
int Gripper_a = 90;
char blue;

SoftwareSerial bt(0,1); 

void setup() {
  bt.begin(9600);
  Serial.begin(9600);
  // Base.attach(servoPin);
  // Base.write(Base_a);
      Base.attach(BasePin);
      Elbow.attach(ElbowPin);
      Wrist.attach(WristPin);
      Gripper.attach(GripperPin);

      Base.write(Base_a);
      Elbow.write(Elbow_a);
      Wrist.write(Wrist_a);
      Gripper.write(Gripper_a);

}

void loop() {
    blue=bt.read();

    // int input = Serial.parseInt();
    if (blue == '1') {
      // Base.attach(servoPin);
      Base_a +=5;
      delay(15);
      Base.write(Base_a);
      delay(15);
      Serial.print("Base_a = ");
      Serial.println(Base_a);
      // Base.detach();

    }
    else if (blue == '2') {

      // Base.attach(BasePin);
      Base_a -=5;
      delay(15);
      Base.write(Base_a);
      delay(15);
      Serial.print("Base_a = ");
      Serial.println(Base_a);
      // Base.detach();
      }
      
    else if (blue == '3') {

      // Base.attach(BasePin);
      Elbow_a +=5;
      delay(15);
      Elbow.write(Elbow_a);
      delay(15);
      Serial.print("Elbow_a = ");
      Serial.println(Elbow_a);
      // Base.detach();
      }
    else if (blue == '4') {

      // Base.attach(BasePin);
      Elbow_a -=5;
      delay(15);
      Elbow.write(Elbow_a);
      delay(15);
      Serial.print("Elbow_a = ");
      Serial.println(Elbow_a);
      // Base.detach();
      }
    else if (blue == '5') {

      
      Wrist_a +=5;
      delay(15);
      Wrist.write(Wrist_a);
      delay(15);
      Serial.print("Wrist_a = ");
      Serial.println(Wrist_a);
      
      }

    else if (blue == '6') {

      
      Wrist_a -=5;
      delay(15);
      Wrist.write(Wrist_a);
      delay(15);
      Serial.print("Wrist_a = ");
      Serial.println(Wrist_a);
      
      }
    else if (blue == '7') {

      
      Gripper_a +=5;
      delay(15);
      Gripper.write(Gripper_a);
      delay(15);
      Serial.print("Gripper_a = ");
      Serial.println(Gripper_a);
      
      }
    else if (blue == '8') {

      
      Gripper_a -=5;
      delay(15);
      Gripper.write(Gripper_a);
      delay(15);
      Serial.print("Gripper_a = ");
      Serial.println(Gripper_a);
      
      }
  }