#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include <string>
#include <cstdlib>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap(std::string newname);
	~ScavTrap(void);
	void	challengeNewcomer(void);
};

#endif
