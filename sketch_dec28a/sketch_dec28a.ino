const int ledPin = 13;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int delayPeriod = 100;//ms
digitalWrite(ledPin, HIGH);
delay(delayPeriod);
digitalWrite(ledPin, LOW);

}
