// Exercicio 1 - Faça os leds de cores iguais piscarem na sequência verde, amarelo e vermelho com tempo de 1 seg. acesso e 1 seg. apagado.

int pino8 = 8; //verde 1
int pino9 = 9; //amarelo 1
int pino10 = 10; //vermelho 1
int pino11 = 11; //vermelho 2
int pino12 = 12; //amarelo 2
int pino13 = 13; //verde 2

void setup()
{
   pinMode(pino8, OUTPUT);
   pinMode(pino9, OUTPUT);
   pinMode(pino10, OUTPUT);
   pinMode(pino11, OUTPUT);
   pinMode(pino12, OUTPUT);
   pinMode(pino13, OUTPUT);
}

void loop() 
{
  
   digitalWrite(pino8,HIGH); 
   digitalWrite(pino13,HIGH); 
   delay(1000);
   digitalWrite(pino8,LOW);
   digitalWrite(pino13,LOW);

   digitalWrite(pino9,HIGH); 
   digitalWrite(pino12,HIGH); 
   delay(1000);
   digitalWrite(pino9,LOW);
   digitalWrite(pino12,LOW);

   digitalWrite(pino10,HIGH); 
   digitalWrite(pino11,HIGH); 
   delay(1000);

   digitalWrite(pino10,LOW); 
   digitalWrite(pino11,LOW); 
}

/*
// Exercicio 2 - Faça funcionar os 2 grupos de leds como um semáforo como num cruzamento com tempos iguais.

int pino8 = 8;   // verde 1
int pino9 = 9;   // amarelo 1
int pino10 = 10; // vermelho 1
int pino11 = 11; // vermelho 2
int pino12 = 12; // amarelo 2
int pino13 = 13; // verde 2

void setup()
{
   pinMode(pino8, OUTPUT);
   pinMode(pino9, OUTPUT);
   pinMode(pino10, OUTPUT);
   pinMode(pino11, OUTPUT);
   pinMode(pino12, OUTPUT);
   pinMode(pino13, OUTPUT);
}

void loop() 
{
   digitalWrite(pino8, HIGH);
   digitalWrite(pino11, HIGH);
   delay(1000);

   digitalWrite(pino8, LOW);
   digitalWrite(pino9, HIGH);
   delay(1000);
   digitalWrite(pino9, LOW);

   digitalWrite(pino10, HIGH);
   digitalWrite(pino11, LOW);
   digitalWrite(pino13, HIGH);
   delay(1000);

   digitalWrite(pino13, LOW);
   digitalWrite(pino12, HIGH);
   delay(1000);
   digitalWrite(pino12, LOW);

   digitalWrite(pino10, LOW);
}
*/

/*
// Exercicio 3 - Modifique os tempos para que um dos semáforos do cruzamento fique mais tempo com verde aceso do que o outro. Verde 4 seg. e 2 segs.

int pino8 = 8; //verde 1
int pino9 = 9; //amarelo 1
int pino10 = 10; //vermelho 1
int pino11 = 11; //vermelho 2
int pino12 = 12; //amarelo 2
int pino13 = 13; //verde 2

void setup()
{
   pinMode(pino8, OUTPUT);
   pinMode(pino9, OUTPUT);
   pinMode(pino10, OUTPUT);
   pinMode(pino11, OUTPUT);
   pinMode(pino12, OUTPUT);
   pinMode(pino13, OUTPUT);
}

void loop() 
{
   digitalWrite(pino8, HIGH);
   digitalWrite(pino11, HIGH);
   delay(4000);

   digitalWrite(pino8, LOW);
   digitalWrite(pino9, HIGH);
   delay(1000);

   digitalWrite(pino9, LOW);
   digitalWrite(pino10, HIGH);
   digitalWrite(pino11, LOW);
   digitalWrite(pino13, HIGH);
   delay(2000);

   digitalWrite(pino13, LOW);
   digitalWrite(pino12, HIGH);
   delay(1000);

   digitalWrite(pino12, LOW);
   digitalWrite(pino10, LOW);
}
*/

//Exercício 4 – Acrescente um botão a montagem. Faça funcionar os semáforos para travessia de pedestres. Um será para o carro e o outro para os pedestres.


//Exercício 5 – Acrescente um buzzer a montagem e quando o botão for acionado no semáforo de pedestre o buzzer deve apitar por 100ms.


//Exercício 6 – Transforme o acionamento do buzzer numa função.
