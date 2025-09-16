#include "Zombie.hpp"

Zombie::Zombie(std::string s)
{
	this->name = s;
	std::cout << "Default constructor called." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Default destructor called for " << this->name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}
