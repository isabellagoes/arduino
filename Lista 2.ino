//Exercício 1 – Acrescente mais um botão e um led a montagem. Modifique o programa para que cada botão acenda um dos led sem acionar o buzzer.
int buttonPin = 2;
int ledPin = 13; //led 1
int buzzerPin = 7;

int buttonPin2 = 6; //botão novo :)
int ledPin2 = 12;   //led novo :)

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  //novos pinos
  pinMode(buttonPin2, INPUT);
  pinMode(ledPin2, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  int buttonState2 = digitalRead(buttonPin2);

  Serial.println(buttonState);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, LOW);
  } else {
    digitalWrite(ledPin, HIGH);
  }

  if (buttonState2 == LOW) {
    digitalWrite(ledPin2, HIGH);
    Serial.println("LED 2 aceso");
  } else {
    digitalWrite(ledPin2, LOW);
  }

  delay(500);
}

//Exercício 2 – Modifique o programa para o buzzer apitar quando o led 1 acender.
int buttonPin = 2;
int ledPin = 13;
int buzzerPin = 7;
int buttonState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  Serial.println(buttonState);

  if (buttonState == HIGH) { //botão não pressionado
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin); //desliga o buzzer
  } else { //pressionado :)
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000);
  }

  delay(500);  //estabilidade
}


//Exercício 3 – Modifique o programa para o buzzer apitar quando o led 2 acender.
int buttonPin = 2;
int ledPin = 12;
int buzzerPin = 7;
int buttonState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  Serial.println(buttonState);

  if (buttonState == HIGH) { //botão não pressionado
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin); //desliga o buzzer
  } else { //pressionado :)
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000);
  }

  delay(500);  //estabilidade
}

//Exercício 4 – Modifique o programa para o led 1 acender e o buzzer apitar quando o botão 2 é apertado e o led 2 acender e o buzzer apitar quando o botão 1 é apertado.
int buttonPin1 = 2;
int buttonPin2 = 6;
int ledPin1 = 13;
int ledPin2 = 12;
int buzzerPin = 7;
int buttonState1 = 0;
int buttonState2 = 0;

void setup() {
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);


  if (buttonState2 == LOW) {
    digitalWrite(ledPin1, HIGH);
    tone(buzzerPin, 1000);
    Serial.println("Botão 2 pressionado - LED 1 aceso e buzzer tocando");
  } else {
    digitalWrite(ledPin1, LOW);
    noTone(buzzerPin);
  }

  // Quando o botão 1 for pressionado, acende o LED 2 e o buzzer
  if (buttonState1 == LOW) {
    digitalWrite(ledPin2, HIGH);
    tone(buzzerPin, 1000);
    Serial.println("Botão 1 pressionado - LED 2 aceso e buzzer tocando");
  } else {
    digitalWrite(ledPin2, LOW);
    noTone(buzzerPin);     
  }

}

// Exercicio 5 – Escreva 2 funções que faça a leitura do estado de cada um dos botões. (PERGUNTAR)
int botao1 = 2;
int botao2 = 6;
int EstadoBotao1 = 0;
int EstadoBotao2 = 0;

void setup()
{
	pinMode(botao1,INPUT);
  	pinMode(botao2,INPUT);
  	Serial.begin(9600);
}

int lerBotao1() 
{
  	return digitalRead(botao1); 
}

int lerBotao2() 
{
  	return digitalRead(botao2);  
}

void loop()
{
	EstadoBotao1 = lerBotao1();
  	EstadoBotao2 = lerBotao2();
	
    Serial.print("Estado Botao 1: ");
 	Serial.println(EstadoBotao1);
    
  	Serial.print("Estado Botao 2: ");
  	Serial.println(EstadoBotao2);
  
  	delay(5000);
}

/*
// Exercicio 6 – Escreva 2 funções que tomam a decisão se acende ou apaga cada um do led.
int led1 = 13;
int led2 = 12;
int botao1 = 2;
int botao2 = 6;
int EstadoBotao1 = 0;
int EstadoBotao2 = 0;

void setup()
{
	pinMode(led1, OUTPUT);
  	pinMode(led2, OUTPUT);
  	pinMode(botao1, INPUT);
  	pinMode(botao2, INPUT);
  	Serial.begin(9600);
}

void DecisaoLed1()
{
	EstadoBotao1 = digitalRead(botao1);
  
  	if(EstadoBotao1 == HIGH)
  	{
      digitalWrite(led1, LOW ); 
      Serial.println("Led 1 apagado");
  	}
    else
    {
      digitalWrite(led1, HIGH ); 
      Serial.println("Led 1 acesso");
    }
}

void DecisaoLed2()
{
	EstadoBotao2 = digitalRead(botao2);
  	if(EstadoBotao2 == HIGH)
  	{
      digitalWrite(led2, LOW ); 
   	  Serial.println("Led 2 apagado");
  	}
    else
    {
      digitalWrite(led2, HIGH ); 
   	  Serial.println("Led 2 acesso");
    }
}

void loop()
{
	DecisaoLed1();
	DecisaoLed2();
  	delay(500);
}
*/

/*
// Exercicio 7 – Escreva 1 função que tomam a decisão de apitar ou não o buzzer.
int buzzer = 7;
int botao1 = 2;
int EstadoBotao1 = 0;

void setup()
{
  	pinMode(botao1, INPUT);
    pinMode(buzzer, OUTPUT);
  	Serial.begin(9600);
}

void DecisaoBuzzer()
{
	EstadoBotao1 = digitalRead(botao1);
  
  	if(EstadoBotao1 == LOW)
  	{
      tone(buzzer, 2000);
      Serial.println("Buzzer ligado!");
  	}
    else
    {
      noTone(buzzer);
      Serial.println("Buzzer desligado!");
    }
}

void loop()
{
	DecisaoBuzzer();
  	delay(500);
}
*/

/*
// Exercicio 8 – Copie o programa abaixo:
Execute a música.
Depois tire a função “delay(5000);” e coloque no programa o botão 1 para iniciar a música.
#define DO 264
#define RE 297
#define MI 330
#define FA 352
#define SOL 396
#define LA 440
#define SI 495
#define D 500
#define N 29
int notas[][2] = { {SOL, D/2}, {SOL, D/2}, {LA,D*2}, {SOL, D}, {DO*2,D},
{SI,D*3}, {SOL, D/2}, {SOL, D/2}, {LA,D*2}, {SOL,D }, {RE*2,D }, {DO*2,D },
{DO*2,D }, {0,D }, {MI*2,D/2 }, {MI*2,D/2 }, {SOL*2,D*2 }, {MI*2,D },
{DO*2,D },
{SI,D }, {LA,D }, {0,D }, {FA*2,D/2 }, {FA*2,D/2 }, {MI*2,D*2 }, {DO*2,D },
{RE*2,D }, {DO*2,D }, {DO*2,D*3} };
int duracao;
int nota;
int buzzerPin = 7;
void setup(){
pinMode(buzzerPin,OUTPUT);
}
void loop(){
for (int i = 0; i < N; i++){
nota = notas[i][0];
duracao = notas[i][1];
tone(buzzerPin, nota, duracao);
delay(duracao);
}
delay(5000);
}

exercício:

#define DO 264
#define RE 297
#define MI 330
#define FA 352
#define SOL 396
#define LA 440
#define SI 495
#define D 500
#define N 29
int notas[][2] = { {SOL, D/2}, {SOL, D/2}, {LA,D*2}, {SOL, D}, {DO*2,D},
{SI,D*3}, {SOL, D/2}, {SOL, D/2}, {LA,D*2}, {SOL,D }, {RE*2,D }, {DO*2,D },
{DO*2,D }, {0,D }, {MI*2,D/2 }, {MI*2,D/2 }, {SOL*2,D*2 }, {MI*2,D },
{DO*2,D },
{SI,D }, {LA,D }, {0,D }, {FA*2,D/2 }, {FA*2,D/2 }, {MI*2,D*2 }, {DO*2,D },
{RE*2,D }, {DO*2,D }, {DO*2,D*3} };
int duracao;
int nota;
int buzzerPin = 7;
int botao1 = 2;
int EstadoBotao1 = 0;

void setup()
{
  	pinMode(botao1, INPUT);
	pinMode(buzzerPin,OUTPUT);
 	Serial.begin(9600);
}

void loop()
{
  	EstadoBotao1 = digitalRead(botao1);
  	Serial.println(EstadoBotao1);
   if(EstadoBotao1 == LOW)
   {
      for (int i = 0; i < N; i++)
      {
        nota = notas[i][0];
        duracao = notas[i][1];
        tone(buzzerPin, nota, duracao);
        delay(duracao);
      }
   }
   else
   {
   		noTone(buzzerPin); 
   }
}
*/
