// Exercicio 5
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
// Exercicio 6
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
      Serial.println("Led 1 aceso");
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
   	  Serial.println("Led 2 aceso");
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
// Exercicio 7
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
// Exercicio 8 

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
