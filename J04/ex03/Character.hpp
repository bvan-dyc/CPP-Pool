#ifndef CHARACTER_H
# define CHARACTER_H

# include <string>
# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	AMateria	*materias[4];
public:
	Character(std::string const &name);
	~Character(void);
	Character(Character const &src);

	Character	&operator=(Character const &rhs);

	void 		equip(AMateria* materia);
	void 		unequip(int index);
	void 		use(int index, ICharacter const &target);

	std::string const &getName(void) const;
};

#endif
