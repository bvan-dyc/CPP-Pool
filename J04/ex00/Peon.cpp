#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &other) : Victim(other) {
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void) {
	std::cout << "Bleuark..." << std::endl;
}

Peon& Peon::operator=(Peon const &other) {
	 v_name = other.v_name;
	 return (*this);
 }

void Peon::getPolymorphed(void) const {
	std::cout << v_name << " has been turned into a pink pony !" << std::endl;
}
