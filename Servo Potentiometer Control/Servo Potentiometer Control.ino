#include <Servo.h> 

Servo myServo; 

int val;

void setup(){
  myServo.attach(9);
  }

void loop() {
  val = analogRead(1);
  val = map(val, 0, 1023, 0, 180);
  myServo.write(val); 
  delay(15);
  }
