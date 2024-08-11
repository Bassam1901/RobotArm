#include <SoftwareSerial.h>
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
int servoPin = 9;  // Declare the Servo pin
int pos =90 ;
int blue = 0;

SoftwareSerial bt(0,1);   // (Rx,Tx) for the bluetooth module

void setup() {
  bt.begin(9600);
  Serial.begin(9600);
  // myservo.attach(servoPin);
  myservo.write(pos);

}

void loop() {
    blue = int (bt.read());

    if (bt.available())	/* If data is available on serial port */
    {
     Serial.write(bt.read());}
    // Serial.println ();


    //   myservo.attach(servoPin);

    // if (blue == 1) {
    //   // myservo.attach(servoPin);
    //   pos +=10;
    //   // delay(250);
    //   myservo.write(pos);
    //   // delay(250);
    //   Serial.println(pos);
    //   myservo.detach();

    // }
    // if (input == 3) {

    //   myservo.attach(servoPin);
    //   pos -=10;
    //   // delay(250);
    //   myservo.write(pos);
    //   // delay(250);
    //   Serial.println(pos);
    //   myservo.detach();
    //   }
  }