// Exercicio 1 
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
// Exercicio 2
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
// Exercicio 3
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

