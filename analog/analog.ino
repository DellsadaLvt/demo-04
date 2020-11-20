
int ledpin = 9;
int ledpot = 3;
int var = 0;



void setup() 
{
  // put your setup code here, to run once:
        pinMode(ledpin, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
        var = analogRead(ledpot);
        analogWrite(ledpin, var / 20);
        
}
