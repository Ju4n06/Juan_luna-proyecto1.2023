#define LED1 10
#define LED2 9
#define LED3 6
#define LED4 5
#define LED5 3
void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
}

void loop()
{
analogWrite(LED1,255);
analogWrite(LED2,100);
analogWrite(LED3,50);
analogWrite(LED4,20);
analogWrite(LED5,0);
}