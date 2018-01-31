#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include <string>
#include <cstdlib>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
	FragTrap(std::string newname);
	~FragTrap(void);
	void	vaulthunter_dot_exe(std::string const & target);
};

#endif
