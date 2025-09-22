#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl unhappy_harl;

	if (argc != 2)
		return (1);
	unhappy_harl.complain(std::string(argv[1]));
	return (0);
}
