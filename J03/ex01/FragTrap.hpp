#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include <string>
#include <cstdlib>

class FragTrap
{
public:
	FragTrap(std::string newname);
	~FragTrap(void);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);

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
