#include <iostream>

int main(int ac, char **av)
{
	char c;

	if (ac == 1)
	{
		std::cout <<"* LOUD AND UBEARABLE FEEDBACK NOISE *" << std::endl;
		return(0);
	}
	for (int i = 1; i < ac; i++)
	{
		for (int j = 0; av[i][j]; j++)
		{
			c = av[i][j];
			if (av[i][j] >= 97 && av[i][j] <= 122)
				c -= 32;
			std::cout << c;
		}
	}
	std::cout << std::endl;
	return (0);
}
