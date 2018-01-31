#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H

#include <string>
#include <iostream>
# include "ISquad.hpp"
#include "ISpaceMarine.hpp"


class TacticalMarine : public ISpaceMarine
{
public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const &src);
		~TacticalMarine(void);

		TacticalMarine	&operator=(TacticalMarine const &rhs);

		ISpaceMarine*		clone(void) const;
		void 				battleCry(void) const;
		void 				rangedAttack(void) const;
		void 				meleeAttack(void) const;
};

#endif
