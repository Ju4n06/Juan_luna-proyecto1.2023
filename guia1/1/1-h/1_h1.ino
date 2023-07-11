#define RGB_G 4
#define RGB_B 3
#define RGB_R 2

#define boton 6

void setup()
{
  pinMode(RGB_G, OUTPUT);
  pinMode(RGB_B, OUTPUT);
  pinMode(RGB_R, OUTPUT);
  
  pinMode(boton, INPUT);
}

void loop()
{
  int estado = digitalRead(boton);
  
  if (estado==0 ){
	digitalWrite( RGB_G , 0  );//rojo
  	digitalWrite( RGB_B , 0 );
  	digitalWrite( RGB_R , 100  );
 	delay(1000);
  	digitalWrite( RGB_R , LOW );
  	delay(1000);
    digitalWrite( RGB_G , 255  );//cian
  	digitalWrite( RGB_B , 255 );
  	digitalWrite( RGB_R , 0  );
  	delay(1000);
  	digitalWrite( RGB_G , LOW );
  	digitalWrite( RGB_B , LOW );
  	digitalWrite( RGB_R , LOW );
  	delay(1000);
  	digitalWrite( RGB_G , 147  );//verde
  	digitalWrite( RGB_B , 0 );
  	digitalWrite( RGB_R , 44  );
  	delay(1000);
  	digitalWrite( RGB_G , LOW );
  	digitalWrite( RGB_B , LOW );
  	digitalWrite( RGB_R , LOW );
  	delay(1000);
	digitalWrite( RGB_G , 118  );//magenta
  	digitalWrite( RGB_B , 52 );
  	digitalWrite( RGB_R , 207  );
  	delay(1000);
  	digitalWrite( RGB_G , LOW );
  	digitalWrite( RGB_B , LOW );
  	digitalWrite( RGB_R , LOW );
  	delay(1000);
	digitalWrite( RGB_G , 0  );//azul
  	digitalWrite( RGB_B , 255 );
  	digitalWrite( RGB_R , 0 );
  	delay(1000);
    digitalWrite( RGB_G , LOW );
  	digitalWrite( RGB_B , LOW );
  	digitalWrite( RGB_R , LOW );
  	delay(1000);
  	digitalWrite( RGB_G , 255  );//blanco
  	digitalWrite( RGB_B , 255 );
  	digitalWrite( RGB_R , 255 );
  	delay(1000);
    digitalWrite( RGB_G , LOW );
  	digitalWrite( RGB_B , LOW );
  	digitalWrite( RGB_R , LOW );
  	delay(1000);
    digitalWrite( RGB_G , 255  );//amarrillo
  	digitalWrite( RGB_B , 0 );
  	digitalWrite( RGB_R , 255 );
  	delay(1000);
    digitalWrite( RGB_G , LOW );
  	digitalWrite( RGB_B , LOW );
  	digitalWrite( RGB_R , LOW );
  	delay(1000);
  }
  else{
    digitalWrite( RGB_G , LOW );
  	digitalWrite( RGB_B , LOW );
  	digitalWrite( RGB_R , LOW );
  }  
  
}