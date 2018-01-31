#ifndef AWEAPON_H
# define AWEAPON_H

#include <string>
#include <iostream>

class AWeapon
{
protected:
	std::string _name;
	int			_apcost;
	int			_damage;

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const &other);
    ~AWeapon(void);

	AWeapon	&operator=(AWeapon const &rhs);

    std::string const &getName(void) const;
    int 		getAPCost(void) const;
    int 		getDamage(void) const;

    virtual void attack(void) const = 0;
};

#endif
