#include <iostream>
#include <string>
#include "Human.hpp"

int main(void)
{
	Human 		bob;

	std::cout << bob.identify(void) << std::endl;
	std::cout << bob.getBrain(void).identify(void) << std::endl;
}
