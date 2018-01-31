#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{
		Weapon	club = Weapon("crude spiked club");
		HumanA	bob("Bob", club);
		bob.attack(void);
		club.setType("some other type of club");
		bob.attack(void);
	}
	{
		Weapon	club = Weapon("crude spiked club");
		HumanB	jim("Jim");
		jim.setWeapon(club);
		jim.attack(void);
		club.setType("some other type of club");
		jim.attack(void);
	}
}
