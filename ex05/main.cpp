#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 1)
	{
		std::cout << "Error: program takes no arguments." << std::endl;
		return (1);
	}
	(void)argv;
	{
		Harl unhappy_harl;
		std::cout << "Test: calling with DEBUG" << '\n';
		unhappy_harl.complain(std::string("DEBUG"));
	}
	std::cout << '\n';
	{
		Harl unhappy_harl;
		std::cout << "Test: calling with INFO" << '\n';
		unhappy_harl.complain(std::string("INFO"));
	}
	std::cout << '\n';
	{
		Harl unhappy_harl;
		std::cout << "Test: calling with WARNING" << '\n';
		unhappy_harl.complain(std::string("WARNING"));
	}
	std::cout << '\n';
	{
		Harl unhappy_harl;
		std::cout << "Test: calling with ERROR" << '\n';
		unhappy_harl.complain(std::string("ERROR"));
	}
	std::cout << '\n';
	{
		Harl unhappy_harl;
		std::cout << "Test: calling with HAHA" << std::endl;
		unhappy_harl.complain(std::string("HAHA"));
	}

	return (0);
}
