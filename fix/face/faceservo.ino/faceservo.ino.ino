#include <Servo.h>

int pos = 0;
int servoPin = 3;

Servo myServo;

void(*reset) (void) = 0;
void setup(){
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop(){
  
  if(Serial.read() == 'Y')
  {

   myServo.write(-45); 
   delay(5000); 
   
   myServo.write(90); 
   delay(1000); 
  reset();
  }
}
