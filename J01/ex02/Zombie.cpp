#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type){
	this->name = name;
	this->type = type;
	std::cout << this->type << " Zombie \"" << this->name << "\" is back from the dead." << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << this->type << " Zombie \"" << this->name << "\" was sent to Heaven." << std::endl;
}

void Zombie::announce(void) {
	std::cout << "<" << this->name << "(" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}
