#include "Character.hpp"

Character::Character(std::string const & name) : _name(name) {
	_ap = 40;
	this->_weapon = NULL;
}

Character::Character(Character const &other) : _name(other._name) {
	*this = other;
}

Character::~Character(void) {
}

Character& Character::operator=(Character const &rhs) {
	 _name = rhs._name;
	 return (*this);
 }

 std::string const &Character::getName(void) const {
	 return(_name);
}

int Character::getAP(void) const {
	return(_ap);
}

AWeapon const *Character::getWeapon(void) const {
	return(_weapon);
}

void Character::recoverAP(void) {
	_ap += 10;
}

void Character::equip(AWeapon *weapon) {
	_weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	std::cout << _name << " attacks " << enemy->getType(void) << " with a " << _weapon->getName(void) << std::endl;
	_weapon->attack(void);
	enemy->takeDamage(_weapon->getDamage(void));
	if (enemy->getHP(void) <= 0)
		delete (enemy);
	if (_ap > 0)
	{
		_ap -= _weapon->getAPCost(void);
		if (_ap < 0)
			_ap = 0;
	}
}

std::ostream& operator<<(std::ostream &os, Character const &rhs) {
 	 if (rhs.getWeapon(void))
	 	os << rhs.getName(void) << " has " << rhs.getAP(void) << " and wields a " << rhs.getWeapon(void)->getName(void) << std::endl;
	 else
	 	std::cout << rhs.getName(void) << " has " << rhs.getAP(void) << " and is unarmed" << std::endl;
	 return (os);
 }
