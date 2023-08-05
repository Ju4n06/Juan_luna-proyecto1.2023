#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8
#define boton A0
int tirar = A0;
int tiempo = 1;
 
byte  numero[10][7] = {
                       {0, 0, 0, 0, 0, 0, 0},
                       {0, 1, 1, 0, 0, 0, 0},
                       {1, 1, 0, 1, 1, 0, 1},
                       {1, 1, 1, 1, 0, 0, 1},
                       {0, 1, 1, 0, 0, 1, 1},
                       {1, 0, 1, 1, 0, 1, 1},
                       {1, 0, 1, 1, 1, 1, 1},
                       {0, 0, 0, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, 0, 0},
                       {0, 0, 0, 0, 0, 0, 0}, 
                      };
 
void setup() 
{
 pinMode(tirar, INPUT);
 random(analogRead(A1));
 for (int i = 2; i <= 9; i++)
 {
  pinMode(i, OUTPUT);
 }
}
 
void loop() 
{
 if (digitalRead(tirar) == 1)
 {
  int numerorandom = random(1, 7);
  for (int j = 0; j < 8; j++)
  {
   digitalWrite(j+2, numero[numerorandom][j]);
   delay(tiempo);
  }
 }
}