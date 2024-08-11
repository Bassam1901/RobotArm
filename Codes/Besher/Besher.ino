#include <Servo.h>

// Define servo pins
#define BASE_SERVO_PIN 9
#define SHOULDER_SERVO_PIN 10
#define ELBOW_SERVO_PIN 11
#define GRIPPER_SERVO_PIN 12

// Create servo objects
Servo baseServo;
Servo shoulderServo;
Servo elbowServo;
Servo gripperServo;

// Define servo angles for different positions
#define BASE_HOME_ANGLE 90
#define SHOULDER_HOME_ANGLE 90
#define ELBOW_HOME_ANGLE 90
#define GRIPPER_OPEN_ANGLE 30
#define GRIPPER_CLOSED_ANGLE 150

void setup() {
  // Attach servos to pins
  baseServo.attach(BASE_SERVO_PIN);
  shoulderServo.attach(SHOULDER_SERVO_PIN);
  elbowServo.attach(ELBOW_SERVO_PIN);
  gripperServo.attach(GRIPPER_SERVO_PIN);
  
  // Move arm to home position
  moveArmToHome();
}

void loop() {
  // Example pick and place routine
  pickObject();
  delay(2000); // Delay for demonstration
  placeObject();
  delay(2000); // Delay for demonstration
}

void moveArmToHome() {
  baseServo.write(BASE_HOME_ANGLE);
  shoulderServo.write(SHOULDER_HOME_ANGLE);
  elbowServo.write(ELBOW_HOME_ANGLE);
  gripperServo.write(GRIPPER_OPEN_ANGLE);
  delay(1000); // Delay for servo movement
}

void pickObject() {
  // Open gripper
  gripperServo.write(GRIPPER_OPEN_ANGLE);
  delay(1000); // Delay for gripper to open
  
  // Move arm down to pick position
  shoulderServo.write(180); // Adjust angle as needed
  elbowServo.write(160); // Adjust angle as needed
  
  // Close gripper
  gripperServo.write(GRIPPER_CLOSED_ANGLE);
  delay(1000); // Delay for gripper to close
  
  // Lift object
  shoulderServo.write(SHOULDER_HOME_ANGLE);
  elbowServo.write(ELBOW_HOME_ANGLE);
}

void placeObject() {
  // Move arm to place position
  shoulderServo.write(30); // Adjust angle as needed
  elbowServo.write(90); // Adjust angle as needed
  
  // Open gripper
  gripperServo.write(GRIPPER_OPEN_ANGLE);
  delay(1000); // Delay for gripper to open
  
  // Move arm back to home position
  moveArmToHome();
}
