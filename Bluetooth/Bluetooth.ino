int state;
void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available() >0)
{
  state = Serial.read();
  Serial.println(state);

  if( state == '0')
  {
    digitalWrite(13, LOW);
   analogWrite(3,0);
    }

    
  if( state == '1')
  {
    digitalWrite(13, HIGH);
    analogWrite(3,0);
    }

if(state == '2')//motor speed control
{
  for(int k=255; k>=110;k--)//speed gradually decreases
{
 analogWrite(3,k);
 Serial.println(k);
 delay(1); 
  }
  // analogWrite(3,0);
}

if(state == '3')//motor speed control
{int k=130;
  while(1)
  {
    analogWrite(3,k);
     Serial.println(k);
      state = Serial.read();
        if( state == '0')
        {
          k--;
          }
    }
}


    
//Array Data
    if( state == 0)
  {
    digitalWrite(13, LOW);
    delay(1000);
   }

    
  if( state == 1)
  {
    digitalWrite(13, HIGH);
    delay(1000);
    }
}
}
