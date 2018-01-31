#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{}

Ice::Ice(Ice const & other) : AMateria("ice")
{
	*this = other;
}

Ice::~Ice(void)
{}

Ice		&Ice::operator=(Ice const &rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}

AMateria* 	Ice::clone(void) const
{
	return ((AMateria *)new Ice(*this));
}

void 			Ice::use(ICharacter const &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *'" << std::endl;
}
