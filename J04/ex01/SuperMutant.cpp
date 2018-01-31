#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &other) : Enemy(170, "Super Mutant")
{
	*this = other;
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant& SuperMutant::operator=(SuperMutant const &rhs)
{
	Enemy::operator=(rhs);
	 return (*this);
 }

void SuperMutant::takeDamage(int damage)
 {
 	if (this->_hp > 0 && damage > 3)
 		this->_hp -= damage - 3;
 }
