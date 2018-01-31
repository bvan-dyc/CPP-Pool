#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>
#include <cstdlib>

class ClapTrap
{
public:
	ClapTrap(void);
	~ClapTrap(void);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	int 		hp;
	int 		maxhp;
	int 		ep;
	int 		maxep;
	int 		level;
	std::string	name;
	int 		matk;
	int 		ratk;
	int 		def;
};

#endif
