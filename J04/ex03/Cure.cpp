#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{}

Cure::Cure(Cure const & other) : AMateria("cure")
{
	*this = other;
}

Cure::~Cure(void)
{}

Cure		&Cure::operator=(Cure const &rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}

AMateria* 	Cure::clone(void) const
{
	return ((AMateria *)new Cure(*this));
}

void 			Cure::use(ICharacter const &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *'" << std::endl;
}
