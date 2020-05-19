
// the setup function runs once when you press reset or power the board
int countON=0;
int countOFF=0;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  
}

// the loop function runs over and over again forever
void loop() {
  for(int i=0;i<12;i++)
  {
    if(i%2 == 0)
    {
      Serial.print("This is even: ");Serial.println(i);
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
    }
    else if(i%2 != 0)
    {
    Serial.print("This is odd: ");Serial.println(i);
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
  }
}
