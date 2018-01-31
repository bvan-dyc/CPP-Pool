#ifndef ICHARACTER_H
# define ICHARACTER_H

# include <string>
# include "AMateria.hpp"

class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter(void) {}

	virtual std::string const &getName(void) const = 0;

	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int index, ICharacter const &target) = 0;
};

#endif
