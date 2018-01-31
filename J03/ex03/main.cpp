#include <cstdlib>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	srand(time(NULL));
	FragTrap frag("ROCKTRAP");
	ScavTrap scav("KOGTRAP");
	NinjaTrap nin("NINTRAP");
	std::cout << std::endl;

	frag.rangedAttack("the moon");
	frag.meleeAttack("the moon");
	frag.takeDamage(50);
	frag.takeDamage(150);
	frag.beRepaired(1000);
	frag.vaulthunter_dot_exe("the moon");
	std::cout << std::endl << std::endl;

	scav.rangedAttack("god");
	scav.meleeAttack("god");
	scav.takeDamage(40);
	scav.beRepaired(20);
	scav.challengeNewcomer(void);
	std::cout << std::endl << std::endl;

	nin.rangedAttack("your lifepoints");
	nin.meleeAttack("your lifepoints");
	nin.takeDamage(90);
	nin.beRepaired(120);
	nin.ninjaShoebox(frag);
	nin.ninjaShoebox(scav);
	nin.ninjaShoebox(nin);
	std::cout << std::endl;
}
