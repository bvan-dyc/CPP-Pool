#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent Zevent;

	srand(time(NULL));
	Zombie	ZombieA = Zombie("Adam", "Stack");
	Zombie	ZombieB = Zombie("Eve", "Stack");
	ZombieA.announce(void);
	ZombieB.announce(void);
	Zevent.setZombieType("Heap");
	Zombie	*ZombieC = Zevent.randomChump(void);
	Zombie	*ZombieD = Zevent.randomChump(void);
	delete ZombieC;
	delete ZombieD;
	return(0);
}
