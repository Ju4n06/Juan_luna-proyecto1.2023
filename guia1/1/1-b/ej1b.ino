
#define led1 1
#define led2 2
#define led3 3
#define led4 4
#define led5 5
#define led6 6
#define led7 7
#define led8 8
#define led9 10
#define led10 9

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  delay(500); 
  digitalWrite(led1, LOW);
  delay(500); 
  
  digitalWrite(led2, HIGH);
  delay(500); 
  digitalWrite(led2, LOW);
  delay(500); 
   
  digitalWrite(led3, HIGH);
  delay(500); 
  digitalWrite(led3, LOW);
  delay(500); 
   
  digitalWrite(led4, HIGH);
  delay(500); 
  digitalWrite(led4, LOW);
  delay(500); 
  
  digitalWrite(led5, HIGH);
  delay(500); 
  digitalWrite(led5, LOW);
  delay(500); 
  
  digitalWrite(led6, HIGH);
  delay(500); 
  digitalWrite(led6, LOW);
  delay(500); 
  
  digitalWrite(led7, HIGH);
  delay(500); 
  digitalWrite(led7, LOW);
  delay(500); 
  
  digitalWrite(led8, HIGH);
  delay(500); 
  digitalWrite(led8, LOW);
  delay(500); 
  
  digitalWrite(led9, HIGH);
  delay(500); 
  digitalWrite(led9, LOW);
  delay(500); 
  
  digitalWrite(led10, HIGH);
  delay(500); 
  digitalWrite(led10, LOW);
  delay(500); 
}