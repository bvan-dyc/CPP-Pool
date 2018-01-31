#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string newname){
	name = newname;
	hp = 60;
	maxhp = 60;
	ep = 120;
	maxep = 120;
	level = 1;
	matk = 60;
	ratk = 5;
	def = 0;
	std::cout << "Ninjatrap: Booting sequence complete." << std::endl;
}

NinjaTrap::~NinjaTrap(void) {
	std::cout << "NinjaTrap commits Seddoku." << std::endl;
}

void 	NinjaTrap::ninjaShoebox(NinjaTrap claptrap)
{
	std::cout << "NinjaTrap sequence" << std::endl;
}

void 	NinjaTrap::ninjaShoebox(FragTrap claptrap)
{
	std::cout << "FragTrap sequence" << std::endl;
}

void 	NinjaTrap::ninjaShoebox(ScavTrap claptrap)
{
	std::cout << "ScavTrap sequence" << std::endl;
}
