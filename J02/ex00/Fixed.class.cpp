#include "Fixed.class.hpp"

int const Fixed::nrawbits = 8;

Fixed::Fixed(void){
	fpvalue = 0;
	std::cout << "Constructor called" << std::endl;
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
	return(fpvalue);
}

void		Fixed::setRawBits(int const raw) {
	fpvalue = raw;
}

Fixed 	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	fpvalue = rhs.getRawBits(void);
	return(*this);
}
