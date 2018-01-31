#include "Human.hpp"

Human::Human(void){
}

Human::~Human(void) {
}

Brain Human::getBrain(void) {
	return(Brain);
}
std::string Human::identify(void) {
	return(Brain.identify(void));
}
