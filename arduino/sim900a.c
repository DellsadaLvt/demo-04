#include<SoftwareSerial.h>

SoftwareSerial sim(3,4);

#define sensor A0
char tempchar()

void setup()
{
    sim.begin(9600);

}


void loop()
{
    if(analogRead(sensor)<500)
    {
        sim.println("ATD+123");
    }
}
