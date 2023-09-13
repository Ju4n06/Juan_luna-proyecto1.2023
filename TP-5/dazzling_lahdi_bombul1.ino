int buzzer=8;
int numNotas=10;

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
}
  noTone(buzzer);
}