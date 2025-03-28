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

#define ex1
#include "stdio.h"

/* Exercício 1 – Acrescente mais um botão e um LED à montagem. Modifique o programa para que cada botão acenda um dos LEDs sem acionar o buzzer. */
#ifdef ex1
main(){
int botao1 = 2;
int led1 = 13;
int botao2 = 6;
int led2 = 12;
int buzzer = 7;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(botao1, INPUT);
    pinMode(buzzer, OUTPUT);
    
    pinMode(botao2, INPUT);
    pinMode(led2, OUTPUT);
    
    Serial.begin(9600);
}

void loop() {
    int estadoBotao1 = digitalRead(botao1);
    int estadoBotao2 = digitalRead(botao2);
    
    if (estadoBotao1 == HIGH) {
        digitalWrite(led1, LOW);
    } else {
        digitalWrite(led1, HIGH);
    }
    
    if (estadoBotao2 == LOW) {
        digitalWrite(led2, HIGH);
    } else {
        digitalWrite(led2, LOW);
    }
    
    delay(500);
}
main(){


/* Exercício 2 – Modifique o programa para o buzzer apitar quando o LED 1 acender. */
#ifdef ex2
main(){
int botao1 = 2;
int led1 = 13;
int buzzer = 7;
int botao2 = 6;
int led2 = 12;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(botao1, INPUT);
    pinMode(buzzer, OUTPUT);
    
    pinMode(botao2, INPUT);
    pinMode(led2, OUTPUT);
    
    Serial.begin(9600);
}

void loop() {
    int estadoBotao1 = digitalRead(botao1);
    int estadoBotao2 = digitalRead(botao2);
    
    if (estadoBotao1 == HIGH) {
        digitalWrite(led1, LOW);
        noTone(buzzer);
    } else {
        digitalWrite(led1, HIGH);
        tone(buzzer, 1000);  // Buzzer apita quando LED 1 acende
    }
    
    if (estadoBotao2 == LOW) {
        digitalWrite(led2, HIGH);
    } else {
        digitalWrite(led2, LOW);
    }
    
    delay(500);
}


}
#endif

/* Exercício 3 – Modifique o programa para o buzzer apitar quando o LED 2 acender. */
#ifdef ex3
main(){
int botao1 = 2;
int led1 = 13;
int buzzer = 7;
int botao2 = 6;
int led2 = 12;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(botao1, INPUT);
    pinMode(buzzer, OUTPUT);
    
    pinMode(botao2, INPUT);
    pinMode(led2, OUTPUT);
    
    Serial.begin(9600);
}

void loop() {
    int estadoBotao1 = digitalRead(botao1);
    int estadoBotao2 = digitalRead(botao2);
    
    if (estadoBotao1 == HIGH) {
        digitalWrite(led1, LOW);
        noTone(buzzer);
    } else {
        digitalWrite(led1, HIGH);
        tone(buzzer, 1000);  // Buzzer apita quando LED 1 acende
    }
    
    if (estadoBotao2 == LOW) {
        digitalWrite(led2, HIGH);
        tone(buzzer, 1000);  // Buzzer apita quando LED 2 acende
    } else {
        digitalWrite(led2, LOW);
        noTone(buzzer);
    }
    
    delay(500);
}
}

}
#endif

/* Exercício 4 – Modifique o programa para o LED 1 acender e o buzzer apitar quando o botão 2 é apertado e o LED 2 acender e o buzzer apitar quando o botão 1 é apertado. */
#ifdef ex4
main(){
int botao1 = 2;
int led1 = 13;
int buzzer = 7;
int botao2 = 6;
int led2 = 12;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(botao1, INPUT);
    pinMode(buzzer, OUTPUT);
    
    pinMode(botao2, INPUT);
    pinMode(led2, OUTPUT);
    
    Serial.begin(9600);
}

void loop() {
    int estadoBotao1 = digitalRead(botao1);
    int estadoBotao2 = digitalRead(botao2);
    
    if (estadoBotao2 == LOW) {
        digitalWrite(led1, HIGH);
        tone(buzzer, 1000);
    } else {
        digitalWrite(led1, LOW);
        noTone(buzzer);
    }
    
    if (estadoBotao1 == LOW) {
        digitalWrite(led2, HIGH);
        tone(buzzer, 1000);
    } else {
        digitalWrite(led2, LOW);
        noTone(buzzer);
    }
    
    delay(500);
}
}
#endif

/* Exercício 5 – Escreva 2 funções que façam a leitura do estado de cada um dos botões. */
#ifdef ex5
main(){
int botao1 = 2;
int botao2 = 6;
int estadoBotao1 = 0;
int estadoBotao2 = 0;

void setup() {
    pinMode(botao1, INPUT);
    pinMode(botao2, INPUT);
    Serial.begin(9600);
}

// Função de leitura de cada botão
int lerEstadoBotao(int botao) {
    return digitalRead(botao);
}

void loop() {
    estadoBotao1 = lerEstadoBotao(botao1);
    estadoBotao2 = lerEstadoBotao(botao2);
    
    Serial.print("Estado Botão 1: ");
    Serial.println(estadoBotao1);
    
    Serial.print("Estado Botão 2: ");
    Serial.println(estadoBotao2);
    
    delay(500);
}
}
#endif

/* Exercício 6 – Escreva 2 funções que tomem a decisão se acende ou apaga cada um dos LEDs. */
#ifdef ex6
main(){
int led1 = 13;
int led2 = 12;
int botao1 = 2;
int botao2 = 6;
int estadoBotao1 = 0;
int estadoBotao2 = 0;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(botao1, INPUT);
    pinMode(botao2, INPUT);
    Serial.begin(9600);
}

// Função para tomar a decisão de acender ou apagar LED1
void decisaoLed1() {
    estadoBotao1 = digitalRead(botao1);
    if (estadoBotao1 == HIGH) {
        digitalWrite(led1, LOW);
    } else {
        digitalWrite(led1, HIGH);
    }
}
}

// Função para tomar a decisão de acender ou apagar LED2
void decisaoLed2() {
    estadoBotao2 = digitalRead(botao2);
    if (estadoBotao2 == HIGH) {
        digitalWrite(led2, LOW);
    } else {
        digitalWrite(led2, HIGH);
    }
}

void loop() {
    decisaoLed1();
    decisaoLed2();
    delay(500);
}
}
#endif

/* Exercício 7 – Escreva 1 função que tome a decisão de apitar ou não o buzzer. */
#ifdef ex7
main(){
int buzzer = 7;
int botao1 = 2;
int estadoBotao1 = 0;

void setup() {
    pinMode(botao1, INPUT);
    pinMode(buzzer, OUTPUT);
    Serial.begin(9600);
}
}

// Função para decidir se o buzzer deve apitar
void decisaoBuzzer() {
    estadoBotao1 = digitalRead(botao1);
    if (estadoBotao1 == LOW) {
        tone(buzzer, 2000);
    } else {
        noTone(buzzer);
    }
}

void loop() {
    decisaoBuzzer();
    delay(500);
}
#endif

/* Exercício 8 – Copie o programa abaixo: Execute a música. Depois tire a função delay(5000) e coloque o botão 1 para iniciar a música. */

#ifdef ex8
main(){
#define DO 264
#define RE 297
#define MI 330
#define FA 352
#define SOL 396
#define LA 440
#define SI 495
#define D 500
#define N 29
int notas[][2] = { {SOL, D/2}, {SOL, D/2}, {LA, D*2}, {SOL, D}, {DO*2, D},
                   {SI, D*3}, {SOL, D/2}, {SOL, D/2}, {LA, D*2}, {SOL, D}, {RE*2, D}, {DO*2, D},
                   {DO*2, D}, {0, D}, {MI*2, D/2}, {MI*2, D/2}, {SOL*2, D*2}, {MI*2, D},
                   {DO*2, D}, {SI, D}, {LA, D}, {0, D}, {FA*2, D/2}, {FA*2, D/2}, {MI*2, D*2}, {DO*2, D},
                   {RE*2, D}, {DO*2, D}, {DO*2, D*3} };
int duracao;
int nota;
int buzzerPin = 7;
int botao1 = 2;
int estadoBotao1 = 0;

void setup() {
    pinMode(buzzerPin, OUTPUT);
    pinMode(botao1, INPUT);
    Serial.begin(9600);
}

void loop() {
    estadoBotao1 = digitalRead(botao1);
    if (estadoBotao1 == LOW) {
        for (int i = 0; i < N; i++) {
            nota = notas[i][0];
            duracao = notas[i][1];
            tone(buzzerPin, nota, duracao);
            delay(duracao);
        }
    } else {
        noTone(buzzerPin);
    }
}
}
#endif
