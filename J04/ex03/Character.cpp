#include "Character.hpp"

Character::Character(std::string const &newname) : name(newname)
{
	int i;

	i = 0;
	while (i < 4)
	{
		this->materias[i] = NULL;
		i++;
	}
}

Character::~Character(void)
{}

Character::Character(Character const &other)
{
	*this = other;
}

Character		&Character::operator=(Character const &rhs)
{
	int i;
	AMateria *tmp;

	if (this != &rhs)
	{
		i = 0;
		while (i < 4)
		{
			if (materias[i])
			{
				tmp = materias[i]->clone();
				delete this->materias[i];
				materias[i] = tmp;
			}
			i++;
		}
		name = rhs.name;
	}
	return (*this);
}

void 		Character::equip(AMateria* materia)
{
	int i = 0;

	while (i < 4 && materias[i])
		i++;
	if (i < 4)
		materias[i] = materia;
}

void 		Character::unequip(int index)
{
	if (index < 4)
		materias[index] = NULL;
}

void 		Character::use(int index, ICharacter const &target)
{
	if (index < 4 && materias[index] != NULL)
		materias[index]->use(target);
}

std::string const &Character::getName(void) const
{
	return(name);
}
