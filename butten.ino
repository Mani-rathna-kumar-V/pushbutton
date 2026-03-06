#include <Servo.h>

Servo myServo;

int buttonPin = 2;
int buttonState;

void setup()
{
  pinMode(buttonPin, INPUT);
  myServo.attach(9);
  myServo.write(0);   // Servo initial position
}

void loop()
{
  buttonState = digitalRead(buttonPin);

  if(buttonState == HIGH)
  {
    myServo.write(90);   // Servo ON (rotate to 90°)
    delay(3000);        // Wait for 10 seconds
    myServo.write(0);    // Servo OFF (back to 0°)
  }
}