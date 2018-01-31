#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const &other);
    ~PlasmaRifle(void);

	PlasmaRifle	&operator=(PlasmaRifle const &rhs);

    void	attack(void) const;
};

#endif
