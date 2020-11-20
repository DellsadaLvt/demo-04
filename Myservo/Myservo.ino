#include<Servo.h>
Servo myservo;
int var = 0;

void setup() 
 {
  // put your setup code here, to run once:
    myservo.attach(9);
    
}

void loop()
{
  // put your main code here, to run repeatedly:
  for(var =0; var <180; var +=2)
  {
      myservo.write(var);
      delay(1000);
  }
  for( var =180; var>0; var -=2)
  {
      myservo.write(var);
      delay(1000);
  }
}
