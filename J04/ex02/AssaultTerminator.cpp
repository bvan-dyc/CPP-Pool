#include <iostream>
#include <string>
#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"

AssaultTerminator::AssaultTerminator(void) {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &other) {
	*this = other;
}

AssaultTerminator::~AssaultTerminator(void) {
	std::cout << "I’ll be back ..." << std::endl;
}

ISpaceMarine*	AssaultTerminator::clone(void) const
{
	ISpaceMarine		*clone = new AssaultTerminator(*this);
	return(clone);
}

void 				AssaultTerminator::battleCry(void) const
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator			&AssaultTerminator::operator=(AssaultTerminator const &rhs)
{
	return (*this);
}

void 				AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

void 				AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
