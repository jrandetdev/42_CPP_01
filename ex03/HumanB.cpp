#include "HumanB.hpp"

HumanB::HumanB(std::string desiredName)
{
	this->name = desiredName;
	std::cout << "HumanB constructor called and is now called " << this->name << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB default constructor called" << std::endl;
}

void		HumanB::setWeapon(Weapon desiredWeapon)
{
	this->hisWeapon = desiredWeapon;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << this->hisWeapon.getType() << std::endl;
}