#include "Zombie.hpp"

Zombie::Zombie(std::string s) : name(s)
{
	
}

Zombie::~Zombie()
{
	
}

void	Zombie::announce(void)
{
	std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}
