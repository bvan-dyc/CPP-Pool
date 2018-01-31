#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon 	*weapon;
	std::string 	name;
public:
	HumanB(std::string newname);
	~HumanB(void);

	void attack(void);
	void setWeapon(Weapon &newweapon);
};

#endif
