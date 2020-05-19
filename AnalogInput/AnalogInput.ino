void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(analogRead(A0) < 500)
{
  digitalWrite(13, LOW);
  Serial.println(analogRead(A0));
  Serial.println("OFF");
  }

  else if(analogRead(A0) > 900)
  {
    digitalWrite(13, HIGH);
  Serial.println(analogRead(A0));
  Serial.println("ON");
    }

    else// 500<value<900
    { digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
      }

  Serial.println(analogRead(A0));
  Serial.println("BLINK");

Serial.println(analogRead(A0));

}
