// Exercicio 1 – Faça os leds piscarem a cada 4 seg.
int led = 13;

void setup()
{
	pinMode(led, OUTPUT);
}

void loop()
{
 	digitalWrite(led, HIGH);
  	delay(4000);

 	digitalWrite(led, LOW);
  	delay(4000);
}

/*
// Exercicio 2 – Faça os leds ficarem acesos por 2 seg. e apagados por 4 seg.
int led = 13;

void setup()
{
	pinMode(led, OUTPUT);
}

void loop()
{
	digitalWrite(led, HIGH);
	delay(2000);

	digitalWrite(led, LOW);
	delay(4000);
}
*/

/*
// Exercicio 3 – Faça os leds ficarem acesos por 2 seg. e apagados por 4 seg. e em seguida acesos por 3
seg. e apagados por 5 seg.
int led = 13;

void setup()
{
	pinMode(led, OUTPUT);
}

void loop()
{
	digitalWrite(led, HIGH);
    delay(2000); 
  
  	digitalWrite(led, LOW);
    delay(4000); 
  
  	digitalWrite(led, HIGH);
    delay(3000); 
  
  	digitalWrite(led, LOW);
    delay(5000); 
}
*/

/*
// Exercicio 4  – Troque na montagem a ligação do pino 13 para 12. Faça o led da placa piscar ao mesmo
tempo que o led externo com o tempo 1 seg. 

int led1 = 12;
int led2 = 13;

void setup()
{
	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);
}

void loop()
{
	digitalWrite(led1, HIGH);
  	digitalWrite(led2, HIGH);
  	delay(1000);
  
  	digitalWrite(led1, LOW);
  	digitalWrite(led2, LOW);
  	delay(1000);
}

// Exercicio 5 - Faça o led da placa piscar com um tempo de 2 seg. e o led externo piscar com um tempo
de 3 seg. em sequência.

int ledPlaca = 13;
int ledExterno = 12;

void setup()
{
    pinMode(ledPlaca, OUTPUT);
    pinMode(ledExterno, OUTPUT);
}

void loop()
{
    digitalWrite(ledPlaca, HIGH);
    delay(2000);
    digitalWrite(ledPlaca, LOW);

    digitalWrite(ledExterno, HIGH);
    delay(3000);
    digitalWrite(ledExterno, LOW);
}

// Exercicio 6 - Faça o led externo ficar aceso por 3 seg. e apagado por 5 seg. e o led da placa aceso por
2,5 seg. e apagado por 4,5 seg.

int ledPlaca = 13;
int ledExterno = 12;

void setup()
{
    pinMode(ledPlaca, OUTPUT);
    pinMode(ledExterno, OUTPUT);
}

void loop()
{
    digitalWrite(ledExterno, HIGH);
    delay(3000);
    digitalWrite(ledExterno, LOW);
    
    digitalWrite(ledPlaca, HIGH);
    delay(2500);
    digitalWrite(ledPlaca, LOW);
    delay(4500);
}

// Exercicio 7 – Faça o led da placa piscar alternadamente em relação ao led externo com o tempo de 1
seg.


*/
