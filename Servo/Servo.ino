/*
void setup() {
  // put your setup code here, to run once:
pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(9, 80);
delayMicroseconds(900);
analogWrite(9, 0);

//delayMicroseconds(800);
}*/
int count=0;
void setup() {
  // put your setup code here, to run once:
pinMode(9, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  count++;
Serial.println("Count:");
Serial.println(count);
analogWrite(9, 80);
delayMicroseconds(19000);
analogWrite(9, 0);

delayMicroseconds(1000);

if(count==740)//117 a=110 b=740 c=780
{
  while(1)
  {
    
    analogWrite(9, 70);
    
    
   }
  }
}
