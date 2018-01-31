#include <iostream>
#include <string>
#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &other) {
	*this = other;
}

TacticalMarine::~TacticalMarine(void) {
	std::cout << "Aaargh ..." << std::endl;
}

ISpaceMarine*	TacticalMarine::clone(void) const
{
	ISpaceMarine		*clone = new TacticalMarine(*this);
	return(clone);
}

TacticalMarine			&TacticalMarine::operator=(TacticalMarine const &rhs)
{
	return (*this);
}

void					TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT !" << std::endl;
}

void 				TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with bolter *" << std::endl;
}

void 				TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with chainsword *" << std::endl;
}
