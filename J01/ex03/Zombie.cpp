#include "Zombie.hpp"

Zombie::Zombie(void){
}

Zombie::~Zombie(void) {
	std::cout << this->type << " Zombie \"" << this->name << "\" was sent to Heaven." << std::endl;
}

void Zombie::announce(void) {
	std::cout << "<" << this->name << "(" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}
