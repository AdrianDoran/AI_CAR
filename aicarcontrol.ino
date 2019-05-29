#include "Particle.h"

int startCar(String command);

void setup() {
	Serial1.begin(9600);
	
	Particle.function("Control", startCar);
}

void loop() {
    delay(1000);
}

int startCar(String command)
{
    if (command=="on")
    {
        Serial1.printlnf("1", 0);
        delay(1000);
        return 1;
    }
    else if (command=="off")
    {
        Serial1.printlnf("0", 0);
        delay(1000);
        return 0;
    }
    else
    {
        return -1;
    }
}