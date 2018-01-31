#include "Squad.hpp"

Squad::Squad(void)
{
	maxunit = 13;
	index = 0;

}

Squad::~Squad(void)
{
	for (int i = 0; i < maxunit; i++)
		delete units[i];
}

Squad::Squad(Squad const &other) {
	*this = other;
}

Squad			&Squad::operator=(Squad const &rhs)
{
	int				i;
	ISpaceMarine	*tmp;

	i = 0;
	if (i < this->index)
	{
		tmp = this->units[i]->clone(void);
		delete this->units[i];
		this->units[i] = tmp;
		i++;
	}
	this->maxunit = rhs.maxunit;
	this->index = rhs.index;
	return(*this);
}

int 					Squad::getCount(void) const
{
	return(index);
}

ISpaceMarine*			Squad::getUnit(int uindex) const
{
	if (uindex < index)
		return (units[uindex]);
	else
		return (NULL);
}

int						Squad::push(ISpaceMarine *unit)
{
	if (index < maxunit)
	{
		units[index] = unit;
		index++;
	}
	return(index);
}
