#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string 		type;
public:
	Weapon(std::string wtype);
	~Weapon(void);
	const std::string 	getType(void);
	void 	setType(std::string string);
};

#endif
