#include "Brain.hpp"

Brain::Brain(void){
}

Brain::~Brain(void) {
}

std::string Brain::identify(void) {
	std::stringstream stream;

	stream << static_cast<void*>(this);
	return(stream.str(void));
}
