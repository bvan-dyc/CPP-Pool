#ifndef VICTIM_H
# define VICTIM_H

#include <iostream>
#include <string>
#include <cstdlib>

class Victim
{
public:
	Victim(std::string name);
	~Victim(void);
	Victim(Victim const &other);
	Victim	&operator=(Victim const &rhs);

	virtual void	getPolymorphed(void) const;

	std::string v_name;
};

std::ostream	&operator<<(std::ostream &os, Victim const &rhs);

#endif
