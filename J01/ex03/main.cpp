#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
	srand(time(NULL));
	ZombieHorde horde = ZombieHorde(4);
	horde.setHordetype("Mummy");
	horde.announce(void);
	return(0);
}
