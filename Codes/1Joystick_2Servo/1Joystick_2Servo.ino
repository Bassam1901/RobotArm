#include <ezButton.h>
#include <Servo.h>

#define VRX_PIN  A0 // Arduino pin connected to VRX pin
#define VRY_PIN  A1 // Arduino pin connected to VRY pin


Servo myservo1;
Servo myservo2;

int xValue = 0; // To store value of the X axis
int yValue = 0; // To store value of the Y axis
int angle_x = 90;
int angle_y = 90;


void setup() {
Serial.begin(9600);
myservo1.attach(9);
myservo2.attach(11);
}

void loop() {
  // put your main code here, to run repeatedly:
  xValue = analogRead(VRX_PIN);
  yValue = analogRead(VRY_PIN);

  delay(100);
  
  if (xValue < 300 && angle_x != 180) {
    Serial.println("Servo connected to X Going to 180");
    angle_x += 10;
    myservo1.write(angle_x);              // tell servo to go to Base_aition in variable 'Base_a'
    delay(20);
  }
  else if(xValue > 800 && angle_x != 0) {
    Serial.println("Servo connected to X Going to 0");
    angle_x -= 10;
    myservo1.write(angle_x);              // tell servo to go to Base_aition in variable 'Base_a'
    delay(20);
    }

  delay(100);

  if (yValue < 300 && angle_y != 180) {
    Serial.println("Servo connected to Y Going to 180");
    angle_y += 10;
    myservo2.write(angle_y);              // tell servo to go to Base_aition in variable 'Base_a'
    delay(20);
  }
  else if(yValue > 800 && angle_y != 0) {
    Serial.println("Servo connected to Y Going to 0");
    angle_y -= 10;
    myservo2.write(angle_y);              // tell servo to go to Base_aition in variable 'Base_a'
    delay(20);
    }
  delay(100);

  Serial.print("x = ");
  Serial.print(xValue);
  Serial.print(", y = ");
  Serial.println(yValue);
  delay(100);   
}
