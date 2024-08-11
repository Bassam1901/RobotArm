
void setup() {
  Serial.begin(9600);
  myservo.attach(3);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for (pos = 90; pos <= 110; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    Serial.println("Going to 180");
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 110; pos >= 90; pos -= 1) { // goes from 180 degrees to 0 degrees
    Serial.println("Going to 0");
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
}
