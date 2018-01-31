#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	count = 0;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	*this = other;
}

MateriaSource		&MateriaSource::operator=(MateriaSource const &rhs)
{
	int i;
	AMateria *tmp;

	if (this != &rhs)
	{
		i = 0;
		while (i < count)
		{
			tmp = materias[i]->clone();
			delete materias[i];
			materias[i] = tmp;
			i++;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (count < 4)
	{
		materias[count] = materia;
		count++;
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	int i = 0;

	while (i < 4 && type != materias[i]->getType())
	{
		if (type == materias[i]->getType())
			return(materias[i]->clone());
		i++;
	}
	return (NULL);
}
