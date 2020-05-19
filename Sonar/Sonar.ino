const int trig = 6;
const int echo = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
unsigned long duration;
float distance;

//give short low pulse beforehand for clean hig pulse
digitalWrite(trig,0);
delayMicroseconds(2);

//The sensore is triggered by a high pulse
digitalWrite(trig,1);
delayMicroseconds(5);
digitalWrite(trig,0);

//Read the signal from the sensor:
//The echo pin will recieve Low signal
//The function pulsein helps us to
duration = pulseIn(echo, HIGH);
float _time = duration/2;
float _speed = 0.03475;
distance = _time * _speed;

Serial.print(distance);
Serial.println("cm");
delay(200);
}
