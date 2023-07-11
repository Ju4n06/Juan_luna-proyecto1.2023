#define RGB1v 8
#define RGB1a 9 
#define RGB1r 10

#define RGB2v 5
#define RGB2a 6
#define RGB2r 7

#define RGB3v 2
#define RGB3a 3
#define RGB3r 4

#define boton 12 

bool apretado = false;
int count = 0;

void setup()
{
  pinMode(RGB1v , OUTPUT);
  pinMode(RGB1a , OUTPUT);
  pinMode(RGB1r , OUTPUT);
  
  pinMode(RGB2v , OUTPUT);
  pinMode(RGB2a ,OUTPUT);
  pinMode(RGB2r , OUTPUT);
  
  pinMode(RGB3v , OUTPUT);
  pinMode(RGB3a , OUTPUT);
  pinMode(RGB3r , OUTPUT);
  
  pinMode(boton, INPUT);
}

void loop()
{
  
  
  if( digitalRead(boton) != HIGH && count == 0)
  {
     digitalWrite(RGB1v, HIGH);
 	 digitalWrite(RGB1a, HIGH);
 	 digitalWrite(RGB1r, HIGH);
    
  	digitalWrite(RGB2v, LOW);
  	digitalWrite(RGB2a, LOW);
  	digitalWrite(RGB2r, LOW);
    
    digitalWrite(RGB3v, LOW);
  	digitalWrite(RGB3a, LOW);
  	digitalWrite(RGB3r, LOW);
       
    count += 1;
    delay(50);
  }
   
  if( digitalRead(boton) != HIGH && count == 1 )
  {
    digitalWrite(RGB1v, LOW);
  	digitalWrite(RGB1a, LOW);
  	digitalWrite(RGB1r, LOW);
    
    digitalWrite(RGB2v, HIGH);
  	digitalWrite(RGB2a, HIGH);
  	digitalWrite(RGB2r, HIGH);
    
    digitalWrite(RGB3v, LOW);
  	digitalWrite(RGB3a, LOW);
  	digitalWrite(RGB3r, LOW);
       
    count += 1;
    delay(50);
  }
       
 
  if( digitalRead(boton) != HIGH && count == 2)
  {
    digitalWrite(RGB1v, LOW);
  	digitalWrite(RGB1a, LOW);
  	digitalWrite(RGB1r, LOW);
    
  	digitalWrite(RGB2v, LOW);
  	digitalWrite(RGB2a, LOW);
  	digitalWrite(RGB2r, LOW);
    
  	digitalWrite(RGB3v, HIGH);
  	digitalWrite(RGB3a, HIGH);
  	digitalWrite(RGB3r, HIGH);
       
    count = 0;
    delay(50);
  }

}