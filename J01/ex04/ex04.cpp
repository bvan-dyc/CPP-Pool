#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *pointer = &string;
	std::string &reference = string;

	std::cout << *pointer << " (->using pointer)" << std::endl;
	std::cout << reference << " (using reference)" << std::endl;
	return 0;
}
