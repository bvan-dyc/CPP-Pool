#ifndef PEON_H
# define PEON_H

#include <iostream>
#include <string>
#include <cstdlib>
#include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon(std::string name);
	Peon(Peon const &other);
	~Peon(void);
	Peon			&operator=(Peon const &rhs);

	virtual void	getPolymorphed(void) const;
};

#endif
