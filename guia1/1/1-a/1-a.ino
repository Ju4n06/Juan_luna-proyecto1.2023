#define rojo 5
#define amarillo 4
#define verde 3

void setup()
{
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
  
}

void loop()
{
  digitalWrite(rojo, HIGH);
  delay(2000); 
  digitalWrite(rojo, LOW);
  delay(2000); 
   
  digitalWrite(amarillo, HIGH);
  delay(1500); 
  digitalWrite(amarillo, LOW);
  delay(1500); 
   
  digitalWrite(verde, HIGH);
  delay(2000); 
  digitalWrite(verde, LOW);
  delay(2000); 
  
}