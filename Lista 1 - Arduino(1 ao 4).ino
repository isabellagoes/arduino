// Exercicio 1
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
// Exercicio 2 
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
// Exercicio 3
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
// Exercicio 4 
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
*/
