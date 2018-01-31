#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant(void);
	SuperMutant(SuperMutant const &other);
    ~SuperMutant(void);

	virtual void takeDamage(int damage);
	SuperMutant	&operator=(SuperMutant const &rhs);
};

#endif
