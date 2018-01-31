#include "HumanA.hpp"

HumanA::HumanA(std::string newname, Weapon &newweapon): weapon(newweapon), name(newname)
{
	weapon = newweapon;
}

HumanA::~HumanA(void) {
}

void HumanA::attack(void) {
	std::cout << name << " attacks with his " << weapon.getType(void) << std::endl;
}

void HumanA::setWeapon(Weapon &newweapon) {
	weapon = newweapon;
}
