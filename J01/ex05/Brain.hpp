#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>
#include <sstream>
class Brain
{
public:
	int size;
	int brainpower;

	Brain(void);
	~Brain(void);

	std::string identify(void);
};

#endif
