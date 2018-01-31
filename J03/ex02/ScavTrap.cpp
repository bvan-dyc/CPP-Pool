#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string newname){
	name = newname;
	hp = 100;
	maxhp = 100;
	ep = 50;
	maxep = 50;
	level = 1;
	matk = 20;
	ratk = 15;
	def = 3;
	std::cout << "Scavtrap: Booting sequence complete." << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "Robot down!" << std::endl;
}

void 	ScavTrap::challengeNewcomer(void)
{
	int r = rand(void) % 3;
	std::string challengelist[] = {"Children Cardgame", "Stand Battle", "Beyblade"};
	std::cout << name << "initiated a " << challengelist[r] << " challenge! It's time to duel!" << std::endl;
}
