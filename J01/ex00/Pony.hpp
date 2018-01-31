#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
#include <iostream>
#include <string>
#include <iomanip>

class Pony
{
public:
	std::string		name;
	int				speed;
	int				endurance;
	int				strength;
	Pony(std::string name, int speed, int endurance, int strength);
	~Pony(void);
};

#endif
