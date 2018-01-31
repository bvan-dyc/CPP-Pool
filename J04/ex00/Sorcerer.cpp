#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : s_name(name), s_title(title) {
	std::cout << s_name << ", " << s_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &other) : s_name(other.s_name), s_title(other.s_title) {
	std::cout << s_name << ", " << s_title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void) {
	std::cout << s_name << ", " << s_title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer& Sorcerer::operator=(Sorcerer const &other) {
	 s_name = other.s_name;
	 s_title = other.s_title;
	 return (*this);
 }

std::ostream& operator<<(std::ostream &os, Sorcerer const &rhs) {
 	 os << "I am " << rhs.s_name << ", " << rhs.s_title << " and I like ponies !" << std::endl;
	 return (os);
 }

void Sorcerer::polymorph(Victim const &victim) const {
	victim.getPolymorphed(void);
}
