#include <LiquidCrystal.h>

int buzzer=8;
int numNotas=10;
LiquidCrystal lcd (7,6,5,4,3,2);
int notas[]={587,622,554,698,932,1479,880,659,932,1174};

void setup()
{
  pinMode(buzzer, OUTPUT);
}

void loop()
{
for (int i = 0; i<numNotas; i++)
{
  tone(buzzer, notas[i]);
  delay(500);
  lcd.begin(16,2);
  lcd.print(notas[i]);
}
  noTone(buzzer);
}