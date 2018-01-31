#ifndef ASSAULTTERMINATOR_H
# define ASSAULTTERMINATOR_H

#include <string>
#include <iostream>
# include "ISquad.hpp"


class AssaultTerminator : public ISpaceMarine
{
public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const &src);
		~AssaultTerminator(void);

		AssaultTerminator	&operator=(AssaultTerminator const &rhs);

		ISpaceMarine*	clone(void) const;
		void 				battleCry(void) const;
		void 				rangedAttack(void) const;
		void 				meleeAttack(void) const;
};

#endif
