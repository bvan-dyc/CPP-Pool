#ifndef POWERFIST_H
# define POWERFIST_H
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist(void);
	PowerFist(PowerFist const &other);
    ~PowerFist(void);

	PowerFist	&operator=(PowerFist const &rhs);

    void 			attack(void) const;
};

#endif
