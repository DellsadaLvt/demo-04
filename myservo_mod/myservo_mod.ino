
#include<Servo.h>
int pos =0;
int var =0; 
int ledpot = 3;

Servo myservo;
Servo servo01;
Servo servo02;

void setup()
{
  // put your setup code here, to run once:
    myservo.attach(9);
    servo01.attach(6);
    servo02.attach(5);
}

void loop() 
{
  // put your main code here, to run repeatedly:
    for(pos=0; pos <= 180; pos += 2)
    {
       myservo.write(pos);
       delay(15);   
    }
    for( pos =180; pos>= 0; pos -=2)
    {
      myservo.write(pos);
      delay(20);
    }
    var = analogRead(ledpot);
    var = map(var,  0, 1023, 0, 179);
    servo01.write(var);
    delay(15);
    
}
