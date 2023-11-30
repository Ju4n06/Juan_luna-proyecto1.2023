#include <Adafruit_GFX.h>
#include <Adafruit_GrayOLED.h>
#include <Adafruit_SPITFT.h>
#include <Adafruit_SPITFT_Macros.h>
#include <gfxfont.h>

#include <Adafruit_ST7735.h>
#include <Adafruit_ST7789.h>
#include <Adafruit_ST77xx.h>

#include <SPI.h>

#define TFT_CS 10
#define TFT_RST 9
#define TFT_DC 8

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

int paddleWidth = 30;
int paddleHeight = 5;

int playerPaddleX = 60;
int computerPaddleX = 60;
int playerPaddleY = 120;
int computerPaddleY = 0;

int ballSize = 6;
int ballX = 40;
int ballY = 40;
int ballSpeedX = 2;
int ballSpeedY = 2;

int puntajePlayer = 0;
int puntajeComputer = 0;

int leftButtonPlayerPin = 2;
int rightButtonPlayerPin = 3;
int velocidad = 30;
int paso = 0;

void setup() {
  Serial.begin(9600);
  tft.initR(INITR_GREENTAB);
  tft.setRotation(3);
  tft.fillScreen(tft.color565(0, 0, 0)); // Fondo negro

  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(7, OUTPUT);

  drawPaddle(playerPaddleX, playerPaddleY);
  drawPaddle(computerPaddleX, computerPaddleY);
  drawBall(ballX, ballY);
 
  inicioDelJuego();
}

void loop() {
  delay(velocidad);
  clear(ballX, ballY);
  moveBall();
  checkCollision();

  // Computer AI control
  if (random( 0 , 160) > computerPaddleX + paddleWidth / 2 && computerPaddleX < tft.width() - paddleWidth) {
    computerPaddleX += 5; // Adjust the speed of movement
  } else if (ballX < computerPaddleX + paddleWidth / 2 && computerPaddleX > 0) {
    computerPaddleX -= 5; // Adjust the speed of movement
  }

  //
  if (digitalRead(2) == LOW && playerPaddleX > 0){
    playerPaddleX -= 2;
  }
  if (digitalRead(3) == LOW && playerPaddleX < tft.width() - paddleWidth){
    playerPaddleX += 2;
  }

  drawPaddle(playerPaddleX, playerPaddleY);
  drawPaddle(computerPaddleX, computerPaddleY);
  drawBall(ballX, ballY);

  if( paso == 50 )
  {
    paso = 0;
    velocidad = velocidad - 5;
  }
  paso = paso++;
 

}

void drawPaddle(int x, int y) {
  tft.fillRect(x, y, paddleWidth, paddleHeight, tft.color565(255, 255, 255));
}

void drawBall(int x, int y) {
  tft.fillCircle(x, y, ballSize / 2, tft.color565(255, 255, 255));
}

void moveBall() {
 
  ballX += ballSpeedX;
  ballY += ballSpeedY;

  if (ballX <= 0 || ballX >= tft.width()) {
    ballSpeedX = -ballSpeedX;
  }
  if (ballY <= 0 || ballY >= tft.height()) {
    ballSpeedY = -ballSpeedY;
  }

  if (ballY <= 0) {
    Serial.println("Gana Player");
  }
  if (ballY >= 128) {
    Serial.println("Gana PC");
  }
}

void checkCollision() {
  if (ballY + ballSize / 2 >= playerPaddleY && ballY - ballSize / 2 <= playerPaddleY + paddleHeight) {
    if (ballX + ballSize / 2 >= playerPaddleX && ballX - ballSize / 2 <= playerPaddleX + paddleWidth) {
      ballSpeedY = -ballSpeedY;
      sonido();
    }
  }

  if (ballY + ballSize / 2 >= computerPaddleY && ballY - ballSize / 2 <= computerPaddleY + paddleHeight) {
    if (ballX + ballSize / 2 >= computerPaddleX && ballX - ballSize / 2 <= computerPaddleX + paddleWidth) {
      ballSpeedY = -ballSpeedY;
      sonido();
    }
  }

  if (ballY <= 0 || ballY >= tft.height()) {
    if (ballY <= 0) {
      puntajePlayer++;
    } else {
      puntajeComputer++;
    }
    mostrarGol();
    sonido();sonido();sonido();
    posiciones();

    if (puntajePlayer >= 3 || puntajeComputer >= 3) {
      finDelJuego();
    }
  }
}

void inicioDelJuego() {
  clearScreen();

  tft.setTextSize(2);
  tft.setCursor(30, 20);
  tft.setTextColor(tft.color565(255, 255, 255));
  tft.print("Pong");

  tft.setCursor(30, 60);
  tft.print("del");

  tft.setCursor(30, 100);
  tft.print("Grupo 3");

  delay(500);

  for (int i = 3; i > 0; i--) {
    clearScreen();

    tft.setCursor(75, 50);
    tft.print(i);

    delay(500);
    checkCollision();
  }

  clearScreen();
}

void mostrarGol() {
  clearScreen();

  sonido();
  tft.setTextSize(2);
  tft.setCursor(30, 40);
  tft.setTextColor(tft.color565(255, 255, 255));
  tft.print("Gol!");

  delay(200);
 
  clearScreen();
  posiciones();
}

void posiciones() {
  playerPaddleX = 60;
  computerPaddleX = 60;
  playerPaddleY = 120;
  computerPaddleY = 0;
  ballX = 40;
  ballY = 40;
  ballSpeedX = 2;
  ballSpeedY = 2;
}

void finDelJuego() {
  clearScreen();

  tft.setTextSize(2);
  tft.setCursor(3, 40);
  tft.setTextColor(tft.color565(255, 255, 255));
  tft.print("Gracias por");

  tft.setTextSize(2);
  tft.setCursor(3, 80);
  tft.setTextColor(tft.color565(255, 255, 255));
  tft.print("jugar! :D");

  delay(3000);
  clearScreen();
  puntajePlayer = 0;
  puntajeComputer = 0;
 
  clearScreen();
  inicioDelJuego();
}

void clear(int x, int y) {
  int centerX = x + ballSize;
  int centerY = y + ballSize;
  tft.fillCircle(x, y, 15, tft.color565(0, 0, 0));

  tft.fillRect(0, 0, 300, 10, tft.color565(0, 0, 0));
   tft.fillRect(0, 120, 300, 10, tft.color565(0, 0, 0));
  delayMicroseconds(50);
}

void clearScreen() {
  tft.fillRect(0, 0, 300, 300, tft.color565(0, 0, 0));
  delayMicroseconds(50);
}


void sonido()
{
  digitalWrite(7 , HIGH );
  delay(10);
  digitalWrite(7 , LOW );
  delay(10);

}