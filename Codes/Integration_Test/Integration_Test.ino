// put your setup code 
#include <ezButton.h>
#include <Servo.h>

#define VRX_PIN  A0 // Arduino pin connected to VRX pin
#define VRY_PIN  A1 // Arduino pin connected to VRY pin
#define SW_PIN   2  // Arduino pin connected to SW  pin
Servo myservo;

ezButton button(SW_PIN);

int xValue = 0; // To store value of the X axis
int yValue = 0; // To store value of the Y axis
int bValue = 0; // To store value of the button
int pos = 90;

void setup(){
  Serial.begin(9600) ;
  myservo.attach(9);
  button.setDebounceTime(50); // set debounce time to 50 milliseconds
}

void loop(){
  button.loop(); // MUST call the loop() function first

  // read analog X and Y analog values
  xValue = analogRead(VRX_PIN);
  yValue = analogRead(VRY_PIN);

  // Read the button value
  bValue = button.getState();

  delay(100);
  if (xValue < 100 && pos != 180) {
    Serial.println("Going to 180");
    pos += 10;
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(20);

  }

  delay(100);
  if (xValue > 800 && pos != 0) {
    Serial.println("Going to 0");
    pos -= 10;
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(20);
    
  }


  // print data to Serial Monitor on Arduino IDE
  Serial.print("x = ");
  Serial.print(xValue);
  Serial.print(", y = ");
  Serial.print(yValue);
  Serial.print(" : button = ");
  Serial.println(bValue);
  delay(100);
  
}
