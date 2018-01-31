# include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type_(type)
{
	xp_ = 0;
}

AMateria::AMateria(AMateria const &other)
{
	*this = other;
}

AMateria::~AMateria(void)
{}

AMateria		&AMateria::operator=(AMateria const &rhs)
{
	type_ = rhs.type_;
	xp_ = rhs.xp_;
	return (*this);
}

void 			AMateria::use(ICharacter const &target)
{
	xp_ += 10;
}

std::string const & 	AMateria::getType(void) const
{
	return(type_);
}

unsigned int 			AMateria::getXP(void) const
{
	return(xp_);
}
