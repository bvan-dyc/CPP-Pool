#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>

class Fixed
{
private:
	int 				RawBits;
	static const int 	nRawBits;
public:
	Fixed(void);
	Fixed(Fixed const &copy);
	Fixed(int n);
	Fixed(float f);
	~Fixed(void);

	Fixed 			&operator=(Fixed const &rhs);
	int 			getRawBits(void) const;
	void 			setRawBits(int const raw);
	float			toFloat(void) const;
	int 			toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, Fixed const &rhs);

#endif
