#include "Squad.hpp"
# include "AssaultTerminator.hpp"
# include "TacticalMarine.hpp"

int main(void)
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(void); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry(void);
		cur->rangedAttack(void);
		cur->meleeAttack(void);
	}
	delete vlc;
	return 0;
}
