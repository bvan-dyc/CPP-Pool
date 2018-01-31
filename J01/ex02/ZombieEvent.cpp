#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
}

ZombieEvent::~ZombieEvent(void) {
}

void 	ZombieEvent::setZombieType(std::string type) {
	this->type = type;
}

Zombie *ZombieEvent::newZombie(std::string name) {
	Zombie *newzombie = new Zombie(name, this->type);

	return(newzombie);
}

Zombie *ZombieEvent::randomChump(void) {
	std::string namelist[] = {"Elliot", "Klebold", "Harris", "Jesus", "Whitman", "Charles"};
	Zombie *newzombie = newZombie(namelist[rand(void) % 6]);

	newzombie->announce(void);
	return(newzombie);
}
