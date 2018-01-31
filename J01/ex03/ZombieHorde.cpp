#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	std::string namelist[] = {"Elliot", "Klebold", "Harris", "Jesus", "Whitman", "Charles", "Jiangshi", "Jesus", "Adam"};
	size = N;
	horde = new Zombie[size];
	int i;

	i = 0;
	std::cout << "A new horde appears! (";
	while (i < size - 1)
	{
		horde[i].name = namelist[rand(void) % 6];
		std::cout << horde[i].name << ", ";
		i++;
	}
	horde[i].name = namelist[rand(void) % 5];
	std::cout << horde[i].name << ")" << std::endl;
}

ZombieHorde::~ZombieHorde(void) {
	std::cout << "The Zombie Horde was decimated." << std::endl;
	delete [] horde;
}

void ZombieHorde::setHordetype(std::string type) {
	for(int i; i < size; i++)
		horde[i].type = type;
}

void ZombieHorde::announce(void) {
	for(int i; i < size; i++)
		horde[i].announce(void);
}
