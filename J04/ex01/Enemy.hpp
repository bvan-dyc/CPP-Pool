#ifndef ENEMY_H
# define ENEMY_H

#include <string>
#include <iostream>

class Enemy
{
protected:
	std::string _type;
	int			_hp;

public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const &other);
    virtual ~Enemy(void);

	Enemy	&operator=(Enemy const &rhs);

    std::string	const &getType(void) const;
	int 		getHP(void) const;
	virtual void takeDamage(int damage);
};
#endif
