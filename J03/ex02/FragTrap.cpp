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
