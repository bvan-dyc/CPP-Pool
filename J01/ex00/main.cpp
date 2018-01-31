#include <iostream>
#include <string>
#include <iomanip>
#include "Pony.hpp"

void 	PonyOnTheHeap(std::string name, int speed, int endurance, int strength)
{
	Pony*	pony = new Pony(name, speed, endurance, strength);
	std::cout << pony->name << " enters the race. STATS: spd: " << pony->speed\
	 << "end: " << pony->endurance << "str: " << pony->strength << std::endl;
	delete pony;
}

void 	PonyOnTheStack(std::string name, int speed, int endurance, int strength)
{
	Pony pony = Pony(name, speed, endurance, strength);
	std::cout << pony.name << " enters the race. STATS: spd: " << pony.speed \
	<< "end: " << pony.endurance << "str: " << pony.strength << std::endl;
}

int main(void)
{
	PonyOnTheHeap("Lobster Ruby", 7, 10, 3);
	PonyOnTheStack("Octopus Lolite", 4, 7, 9);
	return (0);
}
