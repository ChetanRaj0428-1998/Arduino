void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(3, INPUT);// make pull up/down resistor
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(3) == 0 )// Checks if Ardiuno pin is low then blink
{
  while(digitalRead(3) == 0);//Checks if the button is atleast pressed and not released
  //after released then blink

 digitalWrite(13, HIGH);
 delay(1000);
 digitalWrite(13, LOW);

 
 digitalWrite(13, HIGH);
 delay(1000);
 digitalWrite(13, LOW);
 
  }
}
