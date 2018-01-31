#ifndef RADSCORPION_H
# define RADSCORPION_H

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion(void);
	RadScorpion(RadScorpion const &other);
    ~RadScorpion(void);

	RadScorpion	&operator=(RadScorpion const &rhs);
};

#endif
