#include "Zombie.hpp"

//Another constructor than the default constructor is created to name the zombie as soon as we receive it. 
Zombie::Zombie(std::string s)
{
	this->name = s;
	std::cout << "Default constructor called." << '\n';
}

//Destructor prints the name of the zombie it is destroying for debugging purposes.
Zombie::~Zombie()
{
	std::cout << "Default destructor called for " << this->name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << '\n';
}
