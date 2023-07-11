#define LEDR 3
#define LEDB 5
#define LEDG 6
void setup()
{
  pinMode(LEDR, OUTPUT);
  pinMode(LEDB, OUTPUT);
  pinMode(LEDG, OUTPUT);
}

void loop()
{
analogWrite(LEDR,0);
analogWrite(LEDB,255);
analogWrite(LEDG,255);
delay (1000);

  
analogWrite(LEDR,255);
analogWrite(LEDB,0);
analogWrite(LEDG,0);
 delay(1000);
  
analogWrite(LEDR,255);
analogWrite(LEDB,0);
analogWrite(LEDG,255);
	delay(1000);
}