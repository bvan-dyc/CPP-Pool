#include "Fixed.class.hpp"
#include <cmath>

int const Fixed::nRawBits = 8;

Fixed::Fixed(void){
	RawBits = 0;
	std::cout << "Constructor called" << std::endl;
}

Fixed::Fixed(int i)
{
	RawBits = i << nRawBits;
	std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed(float f)
{
	RawBits = (int)roundf(f * (1 << nRawBits));
	std::cout << "Float Constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy) {
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return(RawBits);
}

void		Fixed::setRawBits(int const raw) {
	RawBits = raw;
}

Fixed 	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	RawBits = rhs.getRawBits(void);
	return(*this);
}

std::ostream 	&operator<<(std::ostream &os, Fixed const &rhs)
{
	os << rhs.toFloat(void);
	return(os);
}

float	Fixed::toFloat(void) const
{
	return(RawBits / (1 << nRawBits));
}

int		Fixed::toInt(void) const
{
	return(RawBits >> nRawBits);
}
