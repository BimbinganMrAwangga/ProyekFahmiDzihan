/** Workshop Dasar Mikrokontroler
2014 RADE - Robotics AnD Embedded Systems STMIK STIKOM Bali 
**/
#include <Servo.h> 
// membuat nama objek servo untuk pengontrolan servo 
Servo myservo;          
// variable untuk menyimpan posisi servo 
int pos = 0;            
void setup() 
{ 
 // objek servo diletakan pada pin 3
 myservo.attach(3);     
} 
void loop() 
{ 
 // start dari 0 derajar sampai 180 derajat 
 for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  
  for (pos = 90; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  delay(5000);
  for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
    for(;;);
  }
}
