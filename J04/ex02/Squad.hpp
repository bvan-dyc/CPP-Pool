#ifndef SQUAD_H
# define SQUAD_H

#include <string>
#include <iostream>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
private:
	int 			maxunit;
	int				index;
	ISpaceMarine	*units[13];

public:
	Squad(void);
	~Squad(void);
	Squad(Squad const &other);

	Squad			&operator=(Squad const &rhs);

	int 					getCount(void) const;
	ISpaceMarine*			getUnit(int uindex) const;
	int						push(ISpaceMarine *unit);
};

#endif
