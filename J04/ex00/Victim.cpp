#include "Victim.hpp"

Victim::Victim(std::string name) : v_name(name) {
	std::cout << "Some random victim called " << v_name << " just popped !" << std::endl;
}

Victim::Victim(const Victim &other) : v_name(other.v_name) {
	std::cout << "Some random victim called " << v_name << " just popped !" << std::endl;
}

Victim::~Victim(void) {
	std::cout << "Victim " << v_name << " just died for no apparent reason !" << std::endl;
}

Victim& Victim::operator=(Victim const &other) {
	 v_name = other.v_name;
	 return (*this);
 }

 std::ostream	&operator<<(std::ostream &os, Victim const &rhs)
 {
 	os << "I'm " << rhs.v_name << " and i like otters !" << std::endl;
 	return (os);
 }

void Victim::getPolymorphed(void) const {
	std::cout << v_name << " has been turned into a cute little sheep !" << std::endl;
}
