#define RGB1_R 2
#define RGB1_G 4
#define RGB1_B 7

#define RGB1_G 1
#define RGB1_B 2
#define RGB1_R 3

#define RGB2_G 4
#define RGB2_B 5
#define RGB2_R 6


void setup()
{
  pinMode( RGB1_G , OUTPUT );
  pinMode( RGB1_B , OUTPUT );
  pinMode( RGB1_R , OUTPUT );
  pinMode( RGB2_G , OUTPUT );
  pinMode( RGB2_B , OUTPUT );

}


void loop()
{
  
	digitalWrite( RGB1_G , 0  );//rojo
  	digitalWrite( RGB1_B , 0 );
  	digitalWrite( RGB1_R , 100  );
 	delay(1000);
  	digitalWrite( RGB1_R , LOW );
  	delay(1000);
    digitalWrite( RGB2_G , 255  );//cian
  	digitalWrite( RGB2_B , 255 );
  	digitalWrite( RGB2_R , 0  );
  	delay(1000);
  	digitalWrite( RGB2_G , LOW );
  	digitalWrite( RGB2_B , LOW );
  	digitalWrite( RGB2_R , LOW );
  	delay(1000);
  	digitalWrite( RGB1_G , 147  );//verde
  	digitalWrite( RGB1_B , 0 );
  	digitalWrite( RGB1_R , 44  );
  	delay(1000);
  	digitalWrite( RGB1_G , LOW );
  	digitalWrite( RGB1_B , LOW );
  	digitalWrite( RGB1_R , LOW );
  	delay(1000);
	digitalWrite( RGB2_G , 118  );//magenta
  	digitaldigitalWrite( RGB2_B , 52 );
  	digitalWrite( RGB2_R , 207  );
  	delay(1000);
  	digitalWrite( RGB2_G , LOW );
  	digitalWrite( RGB2_B , LOW );
  	digitaldigitaldigitalWrite( RGB2_R , LOW );
  	delay(1000);
	digitaldigitaldigitalWrite( RGB1_G , 0  );//azul
  	digitaldigitalWrite( RGB1_B , 255 );
  	digitalWrite( RGB1_R , 0 );
  	delay(1000);
    digitalWrite( RGB1_G , LOW );
  	digitalWrite( RGB1_B , LOW );
  	digitalWrite( RGB1_R , LOW );
  	delay(1000);
  	analogWrite( RGB2_G , 255  );//blanco
  	analogWrite( RGB2_B , 255 );
  	analogWrite( RGB2_R , 255 );
  	delay(1000);
    digitalWrite( RGB2_G , LOW );
  	digitalWrite( RGB2_B , LOW );
  	digitalWrite( RGB2_R , LOW );
  	delay(1000);
    digitalWrite( RGB1_G , 255  );//amarrillo
  	digitaldigitalWrite( RGB1_B , 0 );
  	digitalWrite( RGB1_R , 255 );
  	delay(1000);
    digitalWrite( RGB1_G , LOW );
  	digitalWrite( RGB1_B , LOW );
  	digitalWrite( RGB1_R , LOW );
  	delay(1000);
}