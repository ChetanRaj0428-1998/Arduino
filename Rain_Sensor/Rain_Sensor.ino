int myLed = 8;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(myLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue = analogRead(A0);

if(sensorValue < 1000)
{
  digitalWrite(myLed, HIGH);
  }
  else
  {
    digitalWrite(myLed, LOW);
    }

Serial.println(sensorValue);
delay(100);
}
