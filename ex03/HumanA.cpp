#include "HumanA.hpp"

HumanA::HumanA(std::string desiredName, Weapon &desiredWeapon)
{
	this->name = desiredName;
	hisWeapon = &desiredWeapon;
	std::cout << "HumanA constructor called" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA default destructor called" << std::endl;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << this->hisWeapon->getType() << std::endl;
}
