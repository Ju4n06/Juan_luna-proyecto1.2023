// C++ code
//
void setup()
{
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(11, HIGH);
  delay(map(analogRead(A0),0,1023,100,3000)); 
  digitalWrite(11, LOW);
  delay(map(analogRead(A0),0,1023,100,3000)); 
}