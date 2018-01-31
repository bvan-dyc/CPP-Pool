#ifndef ISPACEMARINE_H
# define ISPACEMARINE_H

#include <string>
#include <iostream>

class ISpaceMarine
{
public:
       virtual 				~ISpaceMarine(void) {}
       virtual ISpaceMarine* clone(void) const = 0;
       virtual void 		battleCry(void) const = 0;
       virtual void 		rangedAttack(void) const = 0;
       virtual void 		meleeAttack(void) const = 0;
};

#endif
