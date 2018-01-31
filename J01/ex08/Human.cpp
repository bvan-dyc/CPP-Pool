#include "Human.hpp"

void 	Human::meleeAttack(std::string const & target)
{
	std::cout << "A melee attack was initiated against " << target << std::endl;
}

void 	Human::rangedAttack(std::string const & target)
{
	std::cout << "A ranged attack was initiated against " << target << std::endl;
}

void 	Human::intimidatingShout(std::string const & target)
{
	std::cout << "<Intimidating Shoot> was used against " << target << std::endl;
}

void 	Human::action(std::string const & action_name, std::string const & target)
{
	std::string actionsStr[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

   typedef void (Human::*Actions)(std::string const & target);
   Actions actions[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	for (int i = 2; i >= 0; i--)
	{
		if (actionsStr[i] == action_name)
		{
			(this->*(actions[i]))(target);
			break;
		}
	}
}
