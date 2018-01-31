#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(int N);
	~ZombieHorde(void);

	void 		announce(void);
	void 		setHordetype(std::string type);
	Zombie		*horde;
	int 		size;
};

#endif
