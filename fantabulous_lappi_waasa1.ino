int t=0;

#define boton_up 7

#define rgb_R 13
#define rgb_A 12
#define rgb_V 11

#define rgb_r 10
#define rgb_a 9
#define rgb_v 8


void setup()
{
  pinMode(rgb_R , OUTPUT);
  pinMode(rgb_A , OUTPUT);
  pinMode(rgb_V , OUTPUT);
  pinMode(rgb_r , OUTPUT);
  pinMode(rgb_a , OUTPUT);
  pinMode(rgb_v , OUTPUT);
  pinMode(boton_up , INPUT);
}

void loop()
{

t=analogRead(A0);  
  
digitalWrite(rgb_V , HIGH);
digitalWrite(rgb_R , HIGH);
delay(t);
digitalWrite(rgb_V , LOW);
digitalWrite(rgb_R , LOW);
digitalWrite(rgb_R , HIGH);
digitalWrite(rgb_A , HIGH);
delay(t); 
digitalWrite(rgb_A , LOW);
delay(t);
digitalWrite(rgb_R , HIGH);
delay(t); 
digitalWrite(rgb_V , HIGH);
digitalWrite(rgb_R , HIGH);
delay(t);
digitalWrite(rgb_V , LOW);
digitalWrite(rgb_R , LOW);
delay(t);
digitalWrite(rgb_v , HIGH);
digitalWrite(rgb_r , HIGH);
delay(t);
digitalWrite(rgb_v , LOW);
digitalWrite(rgb_r , LOW);
digitalWrite(rgb_r , HIGH);
digitalWrite(rgb_a , HIGH);
delay(t); 
digitalWrite(rgb_a , LOW);
delay(t);
digitalWrite(rgb_r , HIGH);
delay(t); 
digitalWrite(rgb_v , HIGH);
digitalWrite(rgb_r , HIGH);
delay(t);
digitalWrite(rgb_v , LOW);
digitalWrite(rgb_r , LOW);
}