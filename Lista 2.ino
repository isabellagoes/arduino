/*Com seu Arduino conectado ao computador e devidamente configurado apaga o conteúdo
da janela de programa e copie e cole esse é o programa.
// Variaveis
int buttonPin = 2; // Numero do pino do botão de pressão
int ledPin = 13; // Numero do pino do led
int buzzerPin = 7; // Numero do pino do buzzer
int buttonState = 0; // Variável para leitura do estado do botão
// Executa uma vez ao ligar ou reiniciar a placa
void setup() {
pinMode(ledPin, OUTPUT); //Inicializa o pino do LED como saída (OUTPUT)
pinMode(buttonPin, INPUT); // Inicializa o pin do botão como entrada (INPUT)
pinMode(buzzerPin, OUTPUT); //Inicializa o pin do buzzer como saÍda(OUTPUT)
Serial.begin(9600); //Inicia porta serial e define a velocidade de transmissão
}
// Executa infinitamente quando liga a placa
void loop() {
//Lê o estado do botao (HIGH -> +5V -> botão nao press.)(LOW -> 0V botao press)
buttonState = digitalRead(buttonPin);
Serial.println(buttonState);
// Testa se o botão não está pressionado
// Se sim, o estado do botão e alto (HIGH)
if (buttonState == HIGH) {
digitalWrite(ledPin, LOW ); // Desliga o LED
noTone(buzzerPin); //desliga buzzer
}
// Senão (Botao pressionado)
else {
digitalWrite(ledPin,HIGH ); // Liga o LED
tone(buzzerPin, 2000); //liga buzzer
}
}
Agora click no ícone “seta para a direita” para que o programa seja compilado e transferido
para seu Arduino. */

#define ex
#include "stdio.h"

/* Exercício 1 – Acrescente mais um botão e um led à montagem. Modifique o programa para que cada botão acenda um dos LEDs sem acionar o buzzer. */
#ifdef ex1
main()
{
int buttonPin1 = 2;
int buttonPin2 = 6;
int ledPin1 = 13;
int ledPin2 = 12;
int buzzerPin = 7;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int buttonState1 = digitalRead(buttonPin1);
  int buttonState2 = digitalRead(buttonPin2);

  digitalWrite(ledPin1, buttonState1 == LOW ? HIGH : LOW);
  digitalWrite(ledPin2, buttonState2 == LOW ? HIGH : LOW);
}
}
#endif

/* Exercício 2 – Modifique o programa para que o buzzer apite quando o LED 1 acender. */
#ifdef ex2
main()
{
void loop() {
  int buttonState1 = digitalRead(buttonPin1);
  int buttonState2 = digitalRead(buttonPin2);

  if (buttonState1 == LOW) {
    digitalWrite(ledPin1, HIGH);
    tone(buzzerPin, 1000);
  } else {
    digitalWrite(ledPin1, LOW);
    noTone(buzzerPin);
  }

  digitalWrite(ledPin2, buttonState2 == LOW ? HIGH : LOW);
}
}
#endif

/* Exercício 3 – Modifique o programa para que o buzzer apite quando o LED 2 acender. */
#ifdef ex3
main()
{
void loop() {
  int buttonState1 = digitalRead(buttonPin1);
  int buttonState2 = digitalRead(buttonPin2);

  digitalWrite(ledPin1, buttonState1 == LOW ? HIGH : LOW);
  
  if (buttonState2 == LOW) {
    digitalWrite(ledPin2, HIGH);
    tone(buzzerPin, 1000);
  } else {
    digitalWrite(ledPin2, LOW);
    noTone(buzzerPin);
  }
}
}
#endif

/* Exercício 4 – Inverta a lógica dos botões para acender os LEDs e acionar o buzzer. */
#ifdef ex4
main()
{
void loop() {
  int buttonState1 = digitalRead(buttonPin1);
  int buttonState2 = digitalRead(buttonPin2);

  if (buttonState2 == LOW) {
    digitalWrite(ledPin1, HIGH);
    tone(buzzerPin, 1000);
  } else {
    digitalWrite(ledPin1, LOW);
    noTone(buzzerPin);
  }

  if (buttonState1 == LOW) {
    digitalWrite(ledPin2, HIGH);
    tone(buzzerPin, 1000);
  } else {
    digitalWrite(ledPin2, LOW);
    noTone(buzzerPin);
  }
}
}
#endif

/* Exercício 5 – Escreva funções para leitura do estado dos botões. */
#ifdef ex5
main()
{
int lerBotao1() { return digitalRead(buttonPin1); }
int lerBotao2() { return digitalRead(buttonPin2); }

void loop() {
  Serial.print("Botão 1: "); Serial.println(lerBotao1());
  Serial.print("Botão 2: "); Serial.println(lerBotao2());
  delay(500);
}
}
#endif

/* Exercício 6 – Escreva funções para decisão de acendimento dos LEDs. */
#ifdef ex6
main()
{
void DecisaoLed1() {
  digitalWrite(ledPin1, lerBotao1() == LOW ? HIGH : LOW);
}
void DecisaoLed2() {
  digitalWrite(ledPin2, lerBotao2() == LOW ? HIGH : LOW);
}
void loop() {
  DecisaoLed1();
  DecisaoLed2();
  delay(500);
}
}
#endif

/* Exercício 7 – Escreva uma função para controle do buzzer. */
#ifdef ex7
main()
{
void DecisaoBuzzer() {
  if (lerBotao1() == LOW) {
    tone(buzzerPin, 2000);
  } else {
    noTone(buzzerPin);
  }
}
void loop() {
  DecisaoBuzzer();
  delay(500);
}
#endif

/* Exercício 8 – Toque música e controle com botão. */
#ifdef ex8
#define DO 264
#define RE 297
#define MI 330
#define FA 352
#define SOL 396
#define LA 440
#define SI 495
#define D 500
#define N 29
int notas[][2] = {
  {SOL, D/2}, {SOL, D/2}, {LA, D*2}, {SOL, D}, {DO*2, D}, {SI, D*3},
  {SOL, D/2}, {SOL, D/2}, {LA, D*2}, {SOL, D}, {RE*2, D}, {DO*2, D},
  {DO*2, D}, {0, D}, {MI*2, D/2}, {MI*2, D/2}, {SOL*2, D*2}, {MI*2, D},
  {DO*2, D}, {SI, D}, {LA, D}, {0, D}, {FA*2, D/2}, {FA*2, D/2},
  {MI*2, D*2}, {DO*2, D}, {RE*2, D}, {DO*2, D}, {DO*2, D*3}
};

void tocarMusica() {
  for (int i = 0; i < N; i++) {
    tone(buzzerPin, notas[i][0], notas[i][1]);
    delay(notas[i][1]);
  }
}
void loop() {
  if (lerBotao1() == LOW) {
    tocarMusica();
  }
}
}
#endif
