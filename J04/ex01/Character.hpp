#ifndef CHARACTER_H
# define CHARACTER_H

#include <string>
#include <iostream>
#include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
protected:
	std::string _name;
	int			_ap;
	AWeapon *_weapon;

public:
	Character(std::string const & name);
	Character(Character const &other);
    ~Character(void);

	Character	&operator=(Character const &rhs);

    std::string		const &getName(void) const;
	int				getAP(void) const;
	AWeapon	const	*getWeapon(void) const;

	void 			recoverAP(void);
	void 			equip(AWeapon *weapon);
	void 			attack(Enemy *enemy);
};

std::ostream& operator<<(std::ostream &os, Character const &rhs);

#endif
