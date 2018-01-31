#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string  const & type)  : _hp(hp), _type(type) {
}

Enemy::Enemy(Enemy const &other) {
	*this = other;
}

Enemy::~Enemy(void) {
}

Enemy& Enemy::operator=(Enemy const &rhs) {
	 _type = rhs._type;
	 _hp = rhs._hp;
	 return (*this);
 }

 std::string const &Enemy::getType(void) const {
	 return(_type);
}

int 		Enemy::getHP(void) const {
	return(_hp);
}

void Enemy::takeDamage(int damage) {
	if (damage > 0)
	{
		_hp -= damage;
		if (_hp < 0)
			_hp = 0;
	}
}
