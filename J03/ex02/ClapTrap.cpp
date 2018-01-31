#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	name = "CLAPTRAP";
	hp = 10;
	maxhp = 10;
	ep = 10;
	maxep = 10;
	level = 1;
	matk = 10;
	ratk = 10;
	def = 0;
	std::cout << "ClapTrap: initiating boot sequence" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap: Shutdown" << std::endl;
}

void 	ClapTrap::rangedAttack(std::string const & target){
	std::cout << "FR4G-TP " << name << " initiates a ranged attack causing " << ratk << " points of damage!" << std::endl;
}

void 	ClapTrap::meleeAttack(std::string const & target){
	std::cout << "FR4G-TP " << name << " initiates a melee attack causing " << matk << " points of damage!" << std::endl;
}

void 	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > def)
		hp -= (amount - def);
	if (hp < 0)
		hp = 0;
	std::cout << "FR4G-TP took " << amount << "HP of damage." << " (HP= " << hp << "/" << maxhp << ")" << std::endl;
}
void 	ClapTrap::beRepaired(unsigned int amount)
{
	hp += amount;
	if (hp > maxhp)
		hp = maxhp;
	std::cout << "FR4G-TP recovered " << amount << "HP." << " (HP= " << hp << "/" << maxhp << ")" << std::endl;
}
