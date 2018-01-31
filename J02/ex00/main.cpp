#include <iostream>
#include "Fixed.class.hpp"

int		main(void)
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;

	std::cout << a.getRawBits(void) << std::endl;
	std::cout << b.getRawBits(void) << std::endl;
	std::cout << c.getRawBits(void) << std::endl;

	return 0;
}
