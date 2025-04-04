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
        tone(buzzer, 1000);
    } else {
        digitalWrite(led2, LOW);
        noTone(buzzer);
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
    pinMode(led2, OUTPUT);
    pinMode(botao2, INPUT);
    pinMode(buzzer, OUTPUT);
    
    pinMode(botao1, INPUT);
    pinMode(led1, OUTPUT);
    
    Serial.begin(9600);
}

void loop() {
    int estadoBotao1 = digitalRead(botao1);
    int estadoBotao2 = digitalRead(botao2);
    
    if (estadoBotao2 == HIGH) {
        digitalWrite(led2, LOW);
        noTone(buzzer);
    } else {
        digitalWrite(led2, HIGH);
        tone(buzzer, 1000); 
    }
    
    if (estadoBotao1 == LOW) {
        digitalWrite(led1, HIGH);
        tone(buzzer, 1000);
    } else {
        digitalWrite(led1, LOW);
        noTone(buzzer);
    }
    
    delay(500);
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
    } else {
        digitalWrite(led1, LOW);
    }

    if (estadoBotao1 == LOW) {
        digitalWrite(led2, HIGH);
    } else {
        digitalWrite(led2, LOW);
    }

    //buzzer só toca se pelo menos um dos LEDs estiver aceso :)
    if (digitalRead(led1) == HIGH || digitalRead(led2) == HIGH) {
        tone(buzzer, 1000);
    } else {
        noTone(buzzer);
    }

    delay(500);
}
}
#endif

/* Exercício 5 – Escreva 2 funções que façam a leitura do estado de cada um dos botões. REFAZER */ 
#ifdef ex5
main(){
int botao1 = 2;
int led1 = 13;
int buzzer = 7;
int botao2 = 6;
int led2 = 12;

int estadoBotao1;
int estadoBotao2;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(botao1, INPUT);
    pinMode(buzzer, OUTPUT);
    pinMode(botao2, INPUT);
    pinMode(led2, OUTPUT);
    
    Serial.begin(9600);
}

void lerBotoes() {
    estadoBotao1 = digitalRead(botao1);
    estadoBotao2 = digitalRead(botao2);
}

void loop() {
    lerBotoes();

    if (estadoBotao2 == LOW) {
        digitalWrite(led1, HIGH);
    } else {
        digitalWrite(led1, LOW);
    }

    if (estadoBotao1 == LOW) {
        digitalWrite(led2, HIGH);
    } else {
        digitalWrite(led2, LOW);
    }

    if (digitalRead(led1) == HIGH || digitalRead(led2) == HIGH) {
        tone(buzzer, 1000);
    } else {
        noTone(buzzer);
    }

    delay(500);
}
#endif

/* Exercício 6 – Escreva 2 funções que tomem a decisão se acende ou apaga cada um dos LEDs. */
#ifdef ex6
main(){
int botao1 = 2;
int led1 = 13;
int buzzer = 7;
int botao2 = 6;
int led2 = 12;

int estadoBotao1;
int estadoBotao2;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(botao1, INPUT);
    pinMode(buzzer, OUTPUT);
    pinMode(botao2, INPUT);
    pinMode(led2, OUTPUT);
    
    Serial.begin(9600);
}

void lerBotoes() {
    estadoBotao1 = digitalRead(botao1);
    estadoBotao2 = digitalRead(botao2);
}

void controlarLed1() {
    if (estadoBotao2 == LOW) {
        digitalWrite(led1, HIGH);
    } else {
        digitalWrite(led1, LOW);
    }
}

void controlarLed2() {
    if (estadoBotao1 == LOW) {
        digitalWrite(led2, HIGH);
    } else {
        digitalWrite(led2, LOW);
    }
}

void loop() {
    lerBotoes();
    controlarLed1();
    controlarLed2();

    if (digitalRead(led1) == HIGH || digitalRead(led2) == HIGH) {
        tone(buzzer, 1000);
    } else {
        noTone(buzzer);
    }

    delay(500);
}
}
#endif

/* Exercício 7 – Escreva 1 função que tome a decisão de apitar ou não o buzzer. */
#ifdef ex7
main(){
int botao1 = 2;
int led1 = 13;
int buzzer = 7;
int botao2 = 6;
int led2 = 12;

int estadoBotao1;
int estadoBotao2;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(botao1, INPUT);
    pinMode(buzzer, OUTPUT);
    pinMode(botao2, INPUT);
    pinMode(led2, OUTPUT);
    
    Serial.begin(9600);
}

void lerBotoes() {
    estadoBotao1 = digitalRead(botao1);
    estadoBotao2 = digitalRead(botao2);
}

void controlarLed1() {
    if (estadoBotao2 == LOW) {
        digitalWrite(led1, HIGH);
    } else {
        digitalWrite(led1, LOW);
    }
}

void controlarLed2() {
    if (estadoBotao1 == LOW) {
        digitalWrite(led2, HIGH);
    } else {
        digitalWrite(led2, LOW);
    }
}

void controlarBuzzer() {
    if (digitalRead(led1) == HIGH || digitalRead(led2) == HIGH) {
        tone(buzzer, 1000);
    } else {
        noTone(buzzer);
    }
}

void loop() {
    lerBotoes();
    controlarLed1();
    controlarLed2();
    controlarBuzzer();

    delay(500);
}
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

int botao1 = 2;
int led1 = 13;
int buzzer = 7;
int botao2 = 6;
int led2 = 12;

int estadoBotao1;
int estadoBotao2;

int notas[][2] = { {SOL, D/2}, {SOL, D/2}, {LA, D*2}, {SOL, D}, {DO*2, D},
                   {SI, D*3}, {SOL, D/2}, {SOL, D/2}, {LA, D*2}, {SOL, D}, {RE*2, D}, {DO*2, D},
                   {DO*2, D}, {0, D}, {MI*2, D/2}, {MI*2, D/2}, {SOL*2, D*2}, {MI*2, D},
                   {DO*2, D}, {SI, D}, {LA, D}, {0, D}, {FA*2, D/2}, {FA*2, D/2}, {MI*2, D*2}, {DO*2, D},
                   {RE*2, D}, {DO*2, D}, {DO*2, D*3} };

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(botao1, INPUT);
    pinMode(buzzer, OUTPUT);
    pinMode(botao2, INPUT);
    pinMode(led2, OUTPUT);
    
    Serial.begin(9600);
}

void lerBotoes() {
    estadoBotao1 = digitalRead(botao1);
    estadoBotao2 = digitalRead(botao2);
}

void controlarLed1() {
    if (estadoBotao2 == LOW) {
        digitalWrite(led1, HIGH);
    } else {
        digitalWrite(led1, LOW);
    }
}

void controlarLed2() {
    if (estadoBotao1 == LOW) {
        digitalWrite(led2, HIGH);
    } else {
        digitalWrite(led2, LOW);
    }
}

void controlarBuzzer() {
    if (digitalRead(led1) == HIGH || digitalRead(led2) == HIGH) {
        tone(buzzer, 1000);
    } else {
        noTone(buzzer);
    }
}

void tocarMusica() {
    for (int i = 0; i < N; i++) {
        if (notas[i][0] == 0) {
            noTone(buzzer);
        } else {
            tone(buzzer, notas[i][0], notas[i][1]);
        }
        delay(notas[i][1] * 1.3);
    }
    noTone(buzzer);
}

void loop() {
    lerBotoes();
    controlarLed1();
    controlarLed2();
    controlarBuzzer();
    
    if (estadoBotao1 == LOW) {
        tocarMusica();
    }
    
    delay(500);
}
}
#endif
