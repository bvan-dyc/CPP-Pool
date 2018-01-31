#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PowerFist.hpp"

int main(void)
{
    Character* zaz = new Character("zaz");
	Enemy* b = new RadScorpion(void);
	AWeapon* pr = new PlasmaRifle(void);
	AWeapon* pf = new PowerFist(void);

    std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	return 0;
}
