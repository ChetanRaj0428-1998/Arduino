int led1=8;
int led2=9;
int led3=10;
int del=1000;
void setup() {
  // put your setup code here, to run once:
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
/*
digitalWrite(led1, HIGH);
delay(del);
digitalWrite(led2, HIGH);
delay(del);
digitalWrite(led3, HIGH);
delay(del);
digitalWrite(led3, LOW);
delay(del);
digitalWrite(led2, LOW);
delay(del);
digitalWrite(led1, LOW);
delay(del);
*/

/*
for(int i=8;i<=10;i++)
{
digitalWrite(i, HIGH);
delay(del);
digitalWrite(i, LOW);  
}*/

int j=8;
while(j<11)
{
  digitalWrite(j, HIGH);
delay(del);
digitalWrite(j, LOW);
j++;
  }
}
