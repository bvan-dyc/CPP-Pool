#include "Pony.hpp"

Pony::Pony(std::string name, int speed, int endurance, int strength){
	this->name = name;
	this->speed = speed;
	this->endurance = endurance;
	this->strength = strength;
}

Pony::~Pony(void) {
}
