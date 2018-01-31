#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>

class Fixed
{
private:
	int 				fpvalue;
	static const int 	nrawbits;
public:
	Fixed(void);
	Fixed(Fixed const &copy);
	~Fixed(void);

	Fixed & operator=(Fixed const &rhs);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
