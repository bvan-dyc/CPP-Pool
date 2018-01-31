#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

#include <iostream>
#include <string>

class ZombieEvent
{
public:
	ZombieEvent(void);
	~ZombieEvent(void);

	std::string type;
	void 		setZombieType(std::string type);
	Zombie		*newZombie(std::string name);
	Zombie		*randomChump(void);
};

#endif
