#ifndef HUMAN_H
# define HUMAN_H

#include <iostream>
#include <string>
#include "Brain.hpp"

class Human
{
private:
	class Brain Brain;
public:
	Human(void);
	~Human(void);

	class Brain 			getBrain(void);
	std::string 	identify(void);
};

#endif
