#ifndef NINJATRAP_H
# define NINJATRAP_H

#include <iostream>
#include <string>
#include <cstdlib>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap: public ClapTrap
{
public:
	NinjaTrap(std::string newname);
	~NinjaTrap(void);
	void 	ninjaShoebox(NinjaTrap claptrap);
	void 	ninjaShoebox(FragTrap claptrap);
	void 	ninjaShoebox(ScavTrap claptrap);
};

#endif
