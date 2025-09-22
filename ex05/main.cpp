#include "Harl.hpp"

int main()
{
	Harl unhappy_harl;
	
	unhappy_harl.complain(std::string("debug"));
	unhappy_harl.complain(std::string("info"));
	unhappy_harl.complain(std::string("warning"));
	unhappy_harl.complain(std::string("error"));
	unhappy_harl.complain(std::string("does not exist"));
	return (0);
}
