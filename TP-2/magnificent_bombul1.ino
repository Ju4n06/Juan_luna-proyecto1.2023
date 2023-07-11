#define rgb_1 13
#define rgb_2 12
#define rgb_21 11
#define rgb_30 10
#define rgb_22 9
#define tem A0

bool boton;

void setup()  
  
{
  pinMode(tem , OUTPUT);
  pinMode(rgb_1 , OUTPUT);
  pinMode(rgb_2 , OUTPUT);
  pinMode(boton, INPUT);
  
  pinMode(rgb_21 , OUTPUT);
  pinMode(rgb_30 , OUTPUT);
  pinMode(rgb_22 , OUTPUT);
}//fin setup

void loop()
{  
   
  
  boton = digitalRead( 8 );
  delay( 1 );
  
  
  if(boton == HIGH)
  {
    digitalWrite( 13 , LOW );
    delay(500);
    digitalWrite( 12 , LOW );
    delay(500);
    digitalWrite(11 , LOW );
    delay(500);
    digitalWrite( 10 , LOW );
    delay(500);
    digitalWrite( 9 , LOW );
    delay(500);
    
  } else {
    digitalWrite( 13, HIGH);
    delay(50);
    digitalWrite( 12 , HIGH );
    delay(50);
    digitalWrite( 11 ,	HIGH );
    delay(50);
    digitalWrite( 10 , HIGH );
    delay(50);
    digitalWrite( 9 , HIGH );
    delay(50);
  
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
}//fin loop