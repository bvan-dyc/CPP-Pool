#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include <string>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*materias[4];
	int 		count;

public:
	MateriaSource(void);
	MateriaSource(MateriaSource const &other);
	~MateriaSource(void) {}
	MateriaSource		&operator=(MateriaSource const &rhs);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif
