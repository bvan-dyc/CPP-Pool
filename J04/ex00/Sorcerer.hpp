#ifndef SORCERER_H
# define SORCERER_H

#include <iostream>
#include <string>
#include <cstdlib>
#include "Victim.hpp"

class Sorcerer
{
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &other);
	~Sorcerer(void);

	Sorcerer	&operator=(Sorcerer const &rhs);

	void polymorph(Victim const &) const;

	std::string s_name;
	std::string s_title;
};

std::ostream			&operator<<(std::ostream &os, Sorcerer const &rhs);

#endif
