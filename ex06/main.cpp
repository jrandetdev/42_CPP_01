#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl unhappy_harl;

	if (argc != 2)
	{
		std::cout << "Error: Please give a level (DEBUG, INFO, WARNING, ERROR)" << std::endl;
		return (1);
	}
	unhappy_harl.complain(std::string(argv[1]));
	return (0);
}
