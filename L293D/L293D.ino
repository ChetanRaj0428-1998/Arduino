const int i1 = 2;//motor 1
const int i2 = 3;//motor 1
const int i3 = 4;//motor 2
const  int i4 = 5;//motor 2
void setup() {
  // put your setup code here, to run once:
pinMode(i1, OUTPUT);
pinMode(i2, OUTPUT);
pinMode(i3, OUTPUT);
pinMode(i4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//forward
digitalWrite(i1, HIGH);
digitalWrite(i2, LOW);
digitalWrite(i3, HIGH);
digitalWrite(i4, LOW);
delay(5000);

//backward
digitalWrite(i1, LOW);
digitalWrite(i2, HIGH);
digitalWrite(i3, LOW);
digitalWrite(i4, HIGH);
delay(5000);


//Left
digitalWrite(i1, LOW);
digitalWrite(i2, LOW);
digitalWrite(i3, HIGH);
digitalWrite(i4, LOW);
delay(5000);

//Right
digitalWrite(i1, HIGH);
digitalWrite(i2, LOW);
digitalWrite(i3, LOW);
digitalWrite(i4, LOW);
delay(5000);

//Stop
digitalWrite(i1, LOW);
digitalWrite(i2, LOW);
digitalWrite(i3, LOW);
digitalWrite(i4, LOW);
delay(5000);

}
