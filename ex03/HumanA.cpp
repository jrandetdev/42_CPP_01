#include "HumanA.hpp"

HumanA::HumanA(std::string desiredName, Weapon &desiredWeapon)
{
	this->name = desiredName;
	hisWeapon = &desiredWeapon;
}

HumanA::~HumanA()
{
	std::cout << "HumanA default constructor called" << std::endl;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << this->hisWeapon->getType() << std::endl;
}
