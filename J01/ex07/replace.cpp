#include <string>
#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	std::string filename = av[1];
	if (ac >= 4)
	{
		std::ifstream	ifile(filename);
		std::ofstream	ofile(filename + ".replace");
		std::string 	s1 = av[2];
		std::string 	s2 = av[3];
		std::string 	buf;
		size_t			s1_start;

		if (ifile.is_open(void) && ofile.is_open(void))
		{
			size_t len = s1.length(void);
			while ((std::getline(ifile, buf)))
			{
				s1_start = 0;
				while ((s1_start = buf.find(s1, s1_start)) != std::string::npos)
				{
					buf.replace(s1_start, len , s2);
				}
				ofile << buf << std::endl;
			}
			ifile.close(void);
			ofile.close(void);
		}
	}
	return (0);
}
