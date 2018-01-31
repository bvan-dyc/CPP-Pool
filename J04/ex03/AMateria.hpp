#ifndef AMATERIA_H
# define AMATERIA_H

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
private:
	std::string		type_;
	unsigned int 	xp_;
public:
      AMateria(std::string const & type);
	  AMateria(AMateria const & other);
      virtual ~AMateria(void);
	  AMateria				&operator=(AMateria const &rhs);

	  std::string const & 	getType(void) const;
	  unsigned int 			getXP(void) const;

	  virtual AMateria		*clone(void) const = 0;
	  virtual void 			use(ICharacter const &target);
};

#endif
