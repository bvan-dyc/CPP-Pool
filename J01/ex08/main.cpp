#include <iostream>
#include <string>
#include "Human.hpp"

int main(void)
{
	Human	Hero;
	Human	Archer;
	Human	Berserker;

	Hero.action("meleeAttack", "the demon King");
	Archer.action("rangedAttack", "the demon King");
	Berserker.action("intimidatingShout", "the demon King");
}
