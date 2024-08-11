#include <Servo.h>

Servo Base;  // create servo object to control a Base
Servo Wrist;  // create servo object to control a Wrist
Servo Elbow;  // create servo object to control a Elbow
Servo Gripper;  // create servo object to control a Gripper

int BasePin= 9;  // Declare the Servo pin 9
int ElbowPin= 10;  // Declare the Servo pin 10
int WristPin= 11;  // Declare the Servo pin 11
int GripperPin= 3;  // Declare the Servo pin 3

int Base_a = 90;
int Elbow_a = 90;
int Wrist_a = 90;
int Gripper_a = 0;

int pos_B;  
int pos_E;  
int pos_W;  
int pos_G;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

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

  // First Pattern
  for (pos_B = 90; pos_B <= 135; pos_B += 1) { 
  Base.write(pos_B);              
  delay(15);                      
  }
  delay(1000); 
  for (pos_W = 90; pos_W <= 95; pos_W += 1) { 
  Wrist.write(pos_W);              
  delay(15);                      
  }
  delay(1000);
  for (pos_E = 90; pos_E <= 120; pos_E += 1) { 
  Elbow.write(pos_E);              
  delay(15);                      
  }
  delay(1000);
  for (pos_G = 0; pos_G <= 160; pos_G += 5) { 
  Gripper.write(pos_G);              
  delay(15);                      
  }
  delay(1000);

  // Second Pattern
  delay(1000);
  for (pos_E = 120; pos_E >= 90; pos_E -= 1) { 
  Elbow.write(pos_E);              
  delay(15);                      
  }
  delay(1000); 
  for (pos_W = 95; pos_W >= 90; pos_W -= 1) { 
  Wrist.write(pos_W);              
  delay(15);                      
  }
  delay(1000);
  for (pos_B = 135; pos_B >= 90; pos_B -= 1) { 
  Base.write(pos_B);              
  delay(15);                      
  }
 
  // Third Pattern
  delay(1000);
  for (pos_B = 90; pos_B >= 32; pos_B -= 1) { 
  Base.write(pos_B);              
  delay(15);                      
  }
  delay(1000);
  for (pos_E = 90; pos_E <= 110; pos_E += 1) { 
  Elbow.write(pos_E);              
  delay(15);                      
  }
  delay(1000); 
  for (pos_W = 90; pos_W >= 75; pos_W -= 1) { 
  Wrist.write(pos_W);              
  delay(15);                      
  }
  delay(1000);
  for (pos_G = 160; pos_G >= 0; pos_G -= 5) { 
  Gripper.write(pos_G);              
  delay(15);                      
  }

  // Fourth Pattern
  delay(1000);
  for (pos_E = 110; pos_E >= 90; pos_E -= 1) { 
  Elbow.write(pos_E);              
  delay(15);                      
  }
  delay(1000); 
  for (pos_W = 75; pos_W <= 90; pos_W += 1) { 
  Wrist.write(pos_W);              
  delay(15);                      
  }
  delay(1000);
  for (pos_B = 32; pos_B <= 90; pos_B += 1) { 
  Base.write(pos_B);              
  delay(15);                      
  }
  delay(1000);




}
