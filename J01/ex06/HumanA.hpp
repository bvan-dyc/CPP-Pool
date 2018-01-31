#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon 		&weapon;
	std::string 	name;
public:
	HumanA(std::string newname, Weapon &newweapon);
	~HumanA(void);

	void attack(void);
	void setWeapon(Weapon &newweapon);
};

#endif
