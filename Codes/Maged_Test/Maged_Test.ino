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

// SoftwareSerial bt(0,1); 

void setup() {
  // put your setup code here, to run once:
  // bt.begin(9600);
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
  // put your main code here, to run repeatedly:
      delay(2000);
      Base.write(140);
      delay(2000);
      Elbow.write(120);
      delay(2000);
      Wrist.write(95);
      delay(2000);
      Gripper.write(165);

      
      delay(2000);
      Elbow.write(Elbow_a);
      delay(2000);
      Wrist.write(Wrist_a);
      delay(2000);
      Base.write(Base_a);
      // delay(1000);
      // Gripper.write(Gripper_a+85);

      delay(2000);
      Base.write(35);
      delay(2000);
      Elbow.write(110);
      delay(2000);
      Wrist.write(75);
      delay(2000);
      Gripper.write(0);

      delay(2000);
      Elbow.write(Elbow_a);
      delay(2000);
      Wrist.write(Wrist_a);
      delay(2000);
      Base.write(Base_a);
      // delay(1000);
      // Gripper.write(Gripper_a+85);




}
