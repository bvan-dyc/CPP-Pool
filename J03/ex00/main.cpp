#include <cstdlib>
#include "FragTrap.hpp"

int main(void)
{
	FragTrap trap("ROCKTRAP");

	trap.rangedAttack("the moon");
	trap.meleeAttack("the moon");
	trap.takeDamage(50);
	trap.takeDamage(150);
	trap.beRepaired(1000);
	trap.vaulthunter_dot_exe("the moon");
}
