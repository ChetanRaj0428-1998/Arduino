int count=0;//counter to stop servo
int test;// variable to store incoming serial data

void setup() 
{
//put your setup code here, to run once:
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
Serial.begin(9600);//Serial.begin is used to set the speed of communication, in bits per second.
}

void loop()
{
 //put your main code here, to run repeatedly:
if(Serial.available() > 0)//Serial. available() returns the number of characters (i.e. bytes of data) which have arrived in the serial buffer and that are ready to be read
{
  test = Serial.read();//Reads incoming serial data. Serial.read() inherits from the Stream utility class.
}
  
  if(test == '1' && count<=780)// condition to start servo
  {
  count++;
Serial.println("Count:");
Serial.println(count);
analogWrite(9, 80);
delayMicroseconds(19000);
analogWrite(9, 0);

delayMicroseconds(1000);


if(count>=780)// condition to stop servo
{
  
    
    analogWrite(9, 70);
        
    
        count = 0;
        test = '0';
        loop();
  }
  }

  if(test == '2' && count<=780)// condition to start servo
  {
  count++;
Serial.println("Count:");
Serial.println(count);
analogWrite(10, 80);
delayMicroseconds(19000);
analogWrite(10, 0);

delayMicroseconds(1000);

  if(count>=780)// condition to stop servo
{
  
    
    analogWrite(10, 70);
        
    
        count = 0;
        test = '0';
        loop();
  }

  }
  
}
