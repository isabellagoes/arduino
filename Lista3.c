#define ex
#include "stdio.h"

// Exercicio 1 - Faça os leds de cores iguais piscarem na sequência verde, amarelo e vermelho com tempo de 1 seg. acesso e 1 seg. apagado.
#ifdef ex1
main(){
int verde1 = 8;  
int amarelo1 = 9;  
int vermelho1 = 10;  
int vermelho2 = 13;  
int amarelo2 = 12;  
int verde2 = 11;  

void setup() {
   pinMode(verde1, OUTPUT);
   pinMode(amarelo1, OUTPUT);
   pinMode(vermelho1, OUTPUT);
   pinMode(vermelho2, OUTPUT);
   pinMode(amarelo2, OUTPUT);
   pinMode(verde2, OUTPUT);
}

void loop() {
   digitalWrite(verde1, HIGH); 
   digitalWrite(verde2, HIGH); 
   delay(1000);
   digitalWrite(verde1, LOW);
   digitalWrite(verde2, LOW);
   
   digitalWrite(amarelo1, HIGH); 
   digitalWrite(amarelo2, HIGH); 
   delay(1000);
   digitalWrite(amarelo1, LOW);
   digitalWrite(amarelo2, LOW);
   
   digitalWrite(vermelho1, HIGH); 
   digitalWrite(vermelho2, HIGH); 
   delay(1000);
   digitalWrite(vermelho1, LOW); 
   digitalWrite(vermelho2, LOW);
}
}
#endif

// Exercicio 2 - Faça funcionar os 2 grupos de leds como um semáforo como num cruzamento com tempos iguais.
#ifdef ex2
main(){
int verde1 = 8;  
int amarelo1 = 9;  
int vermelho1 = 10;  
int vermelho2 = 13;  
int amarelo2 = 12;  
int verde2 = 11;  

void setup() {
   pinMode(verde1, OUTPUT);
   pinMode(amarelo1, OUTPUT);
   pinMode(vermelho1, OUTPUT);
   pinMode(verde2, OUTPUT);
   pinMode(amarelo2, OUTPUT);
   pinMode(vermelho2, OUTPUT);
}

void loop() {
   //Grupo 1: Verde ;Grupo 2: Vermelho
   digitalWrite(verde1, HIGH);
   digitalWrite(vermelho2, HIGH);
   delay(1000);

   //Grupo 1: Amarelo; Grupo 2: Vermelho
   digitalWrite(verde1, LOW);
   digitalWrite(amarelo1, HIGH);
   delay(1000);
   digitalWrite(amarelo1, LOW);

   //Grupo 1: Vermelho; Grupo 2: Verde
   digitalWrite(vermelho1, HIGH);
   digitalWrite(vermelho2, LOW);
   digitalWrite(verde2, HIGH);
   delay(1000);

   //Grupo 1: Vermelho; Grupo 2: Amarelo
   digitalWrite(verde2, LOW);
   digitalWrite(amarelo2, HIGH);
   delay(1000);
   digitalWrite(amarelo2, LOW);

   //ambos vermelhos por um curto tempo de segurança!!
   digitalWrite(vermelho2, HIGH);
   delay(500);

   //reinicia :)
   digitalWrite(vermelho1, LOW);
}
}
#endif

// Exercicio 3 - Modifique os tempos para que um dos semáforos do cruzamento fique mais tempo com verde aceso do que o outro. Verde 4 seg. e 2 segs.
#ifdef ex3
main(){
int verde1 = 8;  
int amarelo1 = 9;  
int vermelho1 = 10;  
int vermelho2 = 13;  
int amarelo2 = 12;  
int verde2 = 11;  

void setup() {
   pinMode(verde1, OUTPUT);
   pinMode(amarelo1, OUTPUT);
   pinMode(vermelho1, OUTPUT);
   pinMode(verde2, OUTPUT);
   pinMode(amarelo2, OUTPUT);
   pinMode(vermelho2, OUTPUT);
}

void loop() {
   //Grupo 1: Verde (4s); Grupo 2: Vermelho
   digitalWrite(verde1, HIGH);
   digitalWrite(vermelho2, HIGH);
   delay(4000);

   //Grupo 1: Amarelo; Grupo 2: Vermelho
   digitalWrite(verde1, LOW);
   digitalWrite(amarelo1, HIGH);
   delay(1000);
   digitalWrite(amarelo1, LOW);

   //Grupo 1: Vermelho; Grupo 2: Verde (2s)
   digitalWrite(vermelho1, HIGH);
   digitalWrite(vermelho2, LOW);
   digitalWrite(verde2, HIGH);
   delay(2000);

   //Grupo 1: Vermelho; Grupo 2: Amarelo (1s)
   digitalWrite(verde2, LOW);
   digitalWrite(amarelo2, HIGH);
   delay(1000);
   digitalWrite(amarelo2, LOW);

   //vermelhos por um curto tempo de segurança!!
   digitalWrite(vermelho2, HIGH);
   delay(500);

   //reinicia :)
   digitalWrite(vermelho1, LOW);
}
}
#endif

//Exercício 4 – Acrescente um botão a montagem. Faça funcionar os semáforos para travessia de pedestres. Um será para o carro e o outro para os pedestres.
#ifdef ex4
main(){
int verdeCarro = 8;
int amareloCarro = 9;
int vermelhoCarro = 10;
int vermelhoPedestre = 13;
int verdePedestre = 11;
int botao = 7;

void setup() {
  pinMode(verdeCarro, OUTPUT);
  pinMode(amareloCarro, OUTPUT);
  pinMode(vermelhoCarro, OUTPUT);
  pinMode(vermelhoPedestre, OUTPUT);
  pinMode(verdePedestre, OUTPUT);
  pinMode(botao, INPUT_PULLUP); //botão com resistor de pull-up
}

void loop() {
  //Semáforo de carro fica verde
  digitalWrite(verdeCarro, HIGH);
  digitalWrite(vermelhoPedestre, HIGH);

  //Verifica durante 10 segundos se o botão foi pressionado
  for (int i = 0; i < 100; i++) {
    if (digitalRead(botao) == LOW) {
      break; //interrompe o verde imediatamente
    }
    delay(100);
  }

  digitalWrite(verdeCarro, LOW);

  //transição segura: amarelo do carro (para não interromper repentinamente o semáforo dos carros)
  digitalWrite(amareloCarro, HIGH);
  delay(3000);
  digitalWrite(amareloCarro, LOW);

  //carro vermelho, pedestre verde
  digitalWrite(vermelhoCarro, HIGH);
  digitalWrite(vermelhoPedestre, LOW);
  digitalWrite(verdePedestre, HIGH);
  delay(5000);

  //fim da travessia
  digitalWrite(verdePedestre, LOW);
  digitalWrite(vermelhoPedestre, HIGH);
  delay(500);  //tempinho de segurança :)

  digitalWrite(vermelhoCarro, LOW);
}
}
#endif

//Exercício 5 – Acrescente um buzzer a montagem e quando o botão for acionado no semáforo de pedestre o buzzer deve apitar por 100ms.
#ifdef ex5
main(){
int verdeCarro = 8;
int amareloCarro = 9;
int vermelhoCarro = 10;
int vermelhoPedestre = 13;
int verdePedestre = 11;
int botao = 7;
int buzzer = 6; 

void setup() {
  pinMode(verdeCarro, OUTPUT);
  pinMode(amareloCarro, OUTPUT);
  pinMode(vermelhoCarro, OUTPUT);
  pinMode(vermelhoPedestre, OUTPUT);
  pinMode(verdePedestre, OUTPUT);
  pinMode(botao, INPUT_PULLUP); //botão com resistor de pull-up
  pinMode(buzzer, OUTPUT); //buzzer configurado como saída
}

void loop() {
  digitalWrite(verdeCarro, HIGH);
  digitalWrite(vermelhoPedestre, HIGH);

  //Verifica durante 10 segundos se o botão foi pressionado
  for (int i = 0; i < 100; i++) {
    if (digitalRead(botao) == LOW) {
      //botão pressionado, buzzer por 100ms
      tone(buzzer, 1000); 
      delay(100); 
      noTone(buzzer);
      break;  //interrompe o verde imediatamente
    }
    delay(100);
  }

  digitalWrite(verdeCarro, LOW);

  //transição segura: amarelo do carro (para não interromper abruptamente o semáforo dos carros)
  digitalWrite(amareloCarro, HIGH);
  delay(3000);  // 3 segundos de amarelo
  digitalWrite(amareloCarro, LOW);

  // crro vermelho, pedestre verde
  digitalWrite(vermelhoCarro, HIGH);
  digitalWrite(vermelhoPedestre, LOW);
  digitalWrite(verdePedestre, HIGH);
  delay(5000); 

  //fim da travessia
  digitalWrite(verdePedestre, LOW);
  digitalWrite(vermelhoPedestre, HIGH);
  delay(500);  //tempinho de segurança :)

  digitalWrite(vermelhoCarro, LOW);
}
}
#endif

//Exercício 6 – Transforme o acionamento do buzzer numa função.
#ifdef ex6
main(){
int verdeCarro = 8;
int amareloCarro = 9;
int vermelhoCarro = 10;
int vermelhoPedestre = 13;
int verdePedestre = 11;
int botao = 7;
int buzzer = 6; 

//Função para acionar o buzzer
void acionarBuzzer() {
  tone(buzzer, 1000); 
  delay(100);       
  noTone(buzzer);    
}

void setup() {
  pinMode(verdeCarro, OUTPUT);
  pinMode(amareloCarro, OUTPUT);
  pinMode(vermelhoCarro, OUTPUT);
  pinMode(vermelhoPedestre, OUTPUT);
  pinMode(verdePedestre, OUTPUT);
  pinMode(botao, INPUT_PULLUP); 
  pinMode(buzzer, OUTPUT); 
}

void loop() {
  //Semáforo de carro fica verde
  digitalWrite(verdeCarro, HIGH);
  digitalWrite(vermelhoPedestre, HIGH);

  //Verifica durante 10 segundos se o botão foi pressionado
  for (int i = 0; i < 100; i++) {
    if (digitalRead(botao) == LOW) {
      //botão pressionado, buzzer por 100ms
      acionarBuzzer(); 
      break;  //interrompe o verde imediatamente
    }
    delay(100);
  }

  digitalWrite(verdeCarro, LOW);

  //transição segura: amarelo do carro (para não interromper abruptamente o semáforo dos carros)
  digitalWrite(amareloCarro, HIGH);
  delay(3000);  
  digitalWrite(amareloCarro, LOW);

  //carro vermelho, pedestre verde
  digitalWrite(vermelhoCarro, HIGH);
  digitalWrite(vermelhoPedestre, LOW);
  digitalWrite(verdePedestre, HIGH);
  delay(5000); 

  //fim da travessia
  digitalWrite(verdePedestre, LOW);
  digitalWrite(vermelhoPedestre, HIGH);
  delay(500);  //tempinho de segurança :)

  digitalWrite(vermelhoCarro, LOW);
}
}
