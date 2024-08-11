#include <ezButton.h>
#include <Servo.h>

#define VRX1_PIN  A0 // Arduino pin connected to VRX1 pin
#define VRY1_PIN  A1 // Arduino pin connected to VRY1 pin
#define VRX2_PIN  A2 // Arduino pin connected to VRX2 pin
#define VRY2_PIN  A3 // Arduino pin connected to VRY2 pin



Servo Base;
Servo Elbow;
Servo Wrist;
Servo Gripper;


int x1Value = 0; // To store value of the X1 axis
int y1Value = 0; // To store value of the Y1 axis
int x2Value = 0; // To store value of the X2 axis
int y2Value = 0; // To store value of the Y2 axis
int Base_a = 90;
int Elbow_a = 90;
int Wrist_a = 90;
int Gripper_a = 90;

void setup(){
  Serial.begin(9600) ;
  Base.attach(9);
  Elbow.attach(10);
  Wrist.attach(11);
  Gripper.attach(3);
  
}

void loop(){
  
  // read analog X and Y analog values
  x1Value = analogRead(VRX1_PIN);
  y1Value = analogRead(VRY1_PIN);
  x2Value = analogRead(VRX2_PIN);
  y2Value = analogRead(VRY2_PIN);



  delay(100);
  if (x1Value < 300 && Base_a != 180) {
    Serial.println("Base Going to 180");
    Base_a += 10;
    Base.write(Base_a);              // tell servo to go to Base_aition in variable 'Base_a'
    delay(20);
  }
  else if(x1Value > 800 && Base_a != 0) {
    Serial.println("Base Going to 0");
    Base_a -= 10;
    Base.write(Base_a);              // tell servo to go to Base_aition in variable 'Base_a'
    delay(20);
    }
  if (y1Value < 300 && Wrist_a != 180) {
    Serial.println("Wrist Going to 180");
    Wrist_a += 10;
    Wrist.write(Wrist_a);              // tell servo to go to Base_aition in variable 'Wrist_a'
    delay(20);
  }
  else if(y1Value > 800 && Wrist_a != 0) {
    Serial.println("Wrist Going to 0");
    Wrist_a -= 10;
    Wrist.write(Wrist_a);              // tell servo to go to Base_aition in variable 'Wrist_a'
    delay(20);
    }

  delay(100);
  // if (xValue > 800 && Base_a != 0) {
  //   Serial.println("Going to 0");
  //   Base_a -= 10;
  //   myservo.write(Base_a);              // tell servo to go to Base_aition in variable 'Base_a'
  //   delay(20);
    
  // }


  // print data to Serial Monitor on Arduino IDE
  Serial.print("x = ");
  Serial.print(x1Value);
  Serial.print(", y = ");
  Serial.println(y1Value);
  delay(100);
  
}
