#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include <string>
#include <cstdlib>

class ScavTrap
{
public:
	ScavTrap(std::string newname);
	~ScavTrap(void);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(void);

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
