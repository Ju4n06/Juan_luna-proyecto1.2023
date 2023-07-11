#define buzz 5
#define led1 2
#define led2 3

void setup()
{
  pinMode( led1 , OUTPUT );
  pinMode( led2 , OUTPUT );

  pinMode( buzz , OUTPUT );
}

void loop()
{
  	
  	tone(5,250);
  	delay(630);
  	noTone(5);
    delay(430);
	digitalWrite( led1 , HIGH );
  	delay(250);
  	digitalWrite( led1 , LOW );
  	delay(250);
  	digitalWrite( led2 , HIGH );
  	delay(250);
  	digitalWrite( led2 , LOW );
  	delay(250);
  	
}