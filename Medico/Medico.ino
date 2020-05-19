const int i1 = 2;//motor 1
const int i2 = 3;//motor 2
const int i3 = 4;//motor 3
const  int i4 = 5;//motor 4
int state;
void setup() {
  // put your setup code here, to run once:
pinMode(i1, OUTPUT);
pinMode(i2, OUTPUT);
pinMode(i3, OUTPUT);
pinMode(i4, OUTPUT);
pinMode(13, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available() >0)
{
  state = Serial.read();


if( state == 0)
{
//Left
digitalWrite(i1, HIGH);
digitalWrite(i2, LOW);
digitalWrite(i3, LOW);
digitalWrite(i4, LOW);
delay(3000);
}

if( state == 1)
{
//Right
digitalWrite(i1, LOW);
digitalWrite(i2, HIGH);
digitalWrite(i3, LOW);
digitalWrite(i4, LOW);
delay(3000);
}

if( state == 2)
{
//Right
digitalWrite(i1, LOW);
digitalWrite(i2, LOW);
digitalWrite(i3, HIGH);
digitalWrite(i4, LOW);
delay(3000);
}

//Stop
digitalWrite(i1, LOW);
digitalWrite(i2, LOW);
digitalWrite(i3, LOW);
digitalWrite(i4, LOW);
delay(3000);
}
}
