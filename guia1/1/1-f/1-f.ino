#define buzzer 3
#define boton 2


void setup()
{
  pinMode(boton , INPUT);
  pinMode (buzzer, OUTPUT);
}

void loop()
{
int estado = digitalRead(boton);
  
  if (estado==0 ){
    digitalWrite (buzzer,HIGH);
    delay(200);
    digitalWrite (buzzer, LOW);
    delay(200);
  }
}