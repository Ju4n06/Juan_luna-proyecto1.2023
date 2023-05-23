#define rgb_1 10
#define rgb_2 11
#define rgb_21 13

#define rgb_30 9
#define rgb_22 8


void setup()
{
  pinMode(rgb_1 , OUTPUT);
  pinMode(rgb_2 , OUTPUT);
  
  pinMode(rgb_21 , OUTPUT);
  pinMode(rgb_30 , OUTPUT);
  pinMode(rgb_22 , OUTPUT);
}

void loop()
{
  analogWrite(rgb_1 , 255);
  delay(1000);
  digitalWrite(rgb_2 , HIGH);
  digitalWrite(rgb_21 , HIGH);
  analogWrite(rgb_1 , 0);
  delay(1000);
  analogWrite(rgb_2 , LOW);
  
  digitalWrite(rgb_21 , LOW);
 
  analogWrite(rgb_2 , 0 );
  analogWrite(rgb_30 , 150);
  analogWrite(rgb_22 , 150);
  delay(1000);
  
  analogWrite(rgb_30 , 0);
  analogWrite(rgb_22 , 0);
  delay(1000);
}