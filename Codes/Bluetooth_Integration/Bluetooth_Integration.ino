#include<SoftwareSerial.h>
#include <Servo.h>

/* Create object named bt of the class SoftwareSerial */ 
SoftwareSerial bt(0,1); /* (Rx,Tx) */	

Servo Base;
Servo Elbow;
Servo Wrist;
Servo Gripper;

int Base_a = 90;
int Elbow_a = 90;
int Wrist_a = 90;
int Gripper_a = 90;
char reading;

void setup() {
  bt.begin(9600);	/* Define baud rate for software serial communication */
  Serial.begin(9600);	/* Define baud rate for serial communication */
  Base.attach(9);
  Elbow.attach(10);
  Wrist.attach(11);
  Gripper.attach(3);
}

void loop() {
    reading=bt.read();
    if (bt.available())	/* If data is available on serial port */
    {
     delay(50);

     Serial.write(reading);	/* Print character received on to the serial monitor */
     
     switch(reading) {
       case '0':break;

       case '1':
                Wrist_a+=1;Wrist.write(Wrist_a);
                delay(50);
                Serial.println("Wrist going to 180 -Up");
                break;

       case '2':
                Gripper_a+=1;Gripper.write(Gripper_a);
                delay(50);
                Serial.println("Gripper going to 180 -Closing");
                break;

       case '3':
                Wrist_a-=1;Wrist.write(Wrist_a);
                delay(50);
                Serial.println("Wrist going to 0 -Down");
                break;

       case '4':
                Gripper_a-=1;Gripper.write(Gripper_a);
                delay(50);
                Serial.println("Gripper going to 0 -Openning");
                break;

       case '5':
                Elbow_a+=1;Elbow.write(Elbow_a);
                delay(50);
                Serial.println("Elbow going to 180 -Up");
                break;

       case '6':
                Base_a+=1;Base.write(Base_a);
                delay(50);
                Serial.println("Base going to 180 -Right");
                break;

       case '7':
                Elbow_a-=1;Elbow.write(Elbow_a);
                delay(50);
                Serial.println("Elbow going to 0 -Down");
                break;

       case '8':
                Base_a-=1;Base.write(Base_a);
                delay(50);
                Serial.println("Base going to 0 -Left");
                break;
     }
    }
}