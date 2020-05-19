int myA = 8;
int myC = 7;
int del=1000;
void setup() {
  // put your setup code here, to run once:
pinMode(myA, OUTPUT);
pinMode(myC, OUTPUT);

digitalWrite(myC, LOW); //making pin 7 as GND i.e Voltage=0V
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(myA, HIGH);
 delay(del);
digitalWrite(myA, LOW);
 delay(del); 

}
