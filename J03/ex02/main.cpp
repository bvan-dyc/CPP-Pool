#include <cstdlib>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	srand(time(NULL));
	FragTrap frag("ROCKTRAP");
	ScavTrap scav("KOGTRAP");
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
	std::cout << std::endl;
}
