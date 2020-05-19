#include <Servo.h>
Servo servo;

void setup()
{
 servo.attach(8);// signal pin
 servo.write(0);
  delay(1000);
}
int angle;
int i=1;
void loop() 
{
 // scan from 0 to 180 degrees
  for(angle = 10; angle < 180; angle++)  
  {                                  
    servo.write(angle);               
    delay(15);                   
  } 
   servo.write(180);
   delay(3000);
  // now scan back from 180 to 0 degrees
  for(angle = 180; angle > 10; angle--)    
  {                                
    servo.write(angle);           
    delay(15);       
  }
   
   servo.write(0);
   delay(3000); 
  
}
