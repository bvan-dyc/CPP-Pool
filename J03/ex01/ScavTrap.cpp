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

void 	ScavTrap::rangedAttack(std::string const & target){
	std::cout << "FR4G-TP " << name << " attacks from a distance for " << ratk << " points of damage!" << std::endl;
}

void 	ScavTrap::meleeAttack(std::string const & target){
	std::cout << "FR4G-TP " << name << " attacks for " << matk << " points of damage!" << std::endl;
}

void 	ScavTrap::takeDamage(unsigned int amount)
{
	if (amount > def)
		hp -= (amount - def);
	if (hp < 0)
		hp = 0;
	std::cout << "FR4G-TP took " << amount << "HP of damage." << " (HP= " << hp << "/" << maxhp << ")" << std::endl;
}

void 	ScavTrap::beRepaired(unsigned int amount)
{
	hp += amount;
	if (hp > maxhp)
		hp = maxhp;
	std::cout << "FR4G-TP repaired itself for " << amount << "HP." << " (HP= " << hp << "/" << maxhp << ")" << std::endl;
}

void 	ScavTrap::challengeNewcomer(void)
{
	int r = rand(void) % 3;
	std::string challengelist[] = {"Children Cardgame", "Stand Battle", "Beyblade"};
	std::cout << name << "initiated a " << challengelist[r] << " challenge! It's time to duel!" << std::endl;
}
