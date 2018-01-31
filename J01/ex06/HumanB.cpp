#include "HumanB.hpp"

HumanB::HumanB(std::string newname){
	name = newname;
}

HumanB::~HumanB(void) {
}

void HumanB::attack(void) {
	std::cout << name << " attacks with his " << weapon->getType(void) << std::endl;
}

void HumanB::setWeapon(Weapon &newweapon) {
	weapon = &newweapon;
}
