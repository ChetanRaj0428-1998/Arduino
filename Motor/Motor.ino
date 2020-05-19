void setup() {
  // put your setup code here, to run once:
//analogWrite(3, 255);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int k=0; k<255;k++)//speed gradually increases
{
 analogWrite(3,k);
 analogWrite(5,k);
 analogWrite(6,k);
 delay(100); 
  }

for(int k=255; k>=0;k--)//speed gradually decreases
{
 analogWrite(3,k);
 analogWrite(5,k);
 analogWrite(6,k);
 delay(100); 
  }
}
