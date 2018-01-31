#include "FragTrap.hpp"

FragTrap::FragTrap(std::string newname){
	name = newname;
	hp = 100;
	maxhp = 100;
	ep = 100;
	maxep = 100;
	level = 1;
	matk = 30;
	ratk = 20;
	def = 5;
	std::cout << "FragTrap: Are you god? Am I dead?" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "Go on without me!" << std::endl;
}

void 	FragTrap::rangedAttack(std::string const & target){
	std::cout << "FR4G-TP " << name << " initiates a ranged attack causing " << ratk << " points of damage!" << std::endl;
}

void 	FragTrap::meleeAttack(std::string const & target){
	std::cout << "FR4G-TP " << name << " initiates a melee attack causing " << matk << " points of damage!" << std::endl;
}

void 	FragTrap::takeDamage(unsigned int amount)
{
	if (amount > def)
		hp -= (amount - def);
	if (hp < 0)
		hp = 0;
	std::cout << "FR4G-TP took " << amount << "HP of damage." << " (HP= " << hp << "/" << maxhp << ")" << std::endl;
}
void 	FragTrap::beRepaired(unsigned int amount)
{
	hp += amount;
	if (hp > maxhp)
		hp = maxhp;
	std::cout << "FR4G-TP recovered " << amount << "HP." << " (HP= " << hp << "/" << maxhp << ")" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int r = rand(void) % 6;
	if (ep >= 25)
	{
		ep -= 25;
		std::string movelist[] = {"Funzerker", "Meat Unicycle", "Blightbot", "Mechromagician", "Senseless Sacrifice", "Medbot", "Gun Wizard", "One Shot Wonder"};
		std::cout << movelist[r] << "is initiated on " << target << "!" << std::endl;
	}
	else
		std::cout << "Where'd all my bullets go?" << std::endl;
}
