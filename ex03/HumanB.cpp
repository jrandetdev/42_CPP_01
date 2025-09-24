#include "HumanB.hpp"

//HumanB 
HumanB::HumanB(std::string desiredName) : name(desiredName) ,hisWeapon(NULL)
{
	std::cout << "HumanB constructor called and is now called " << this->name << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB default destructor called" << std::endl;
}

//HumanB uses the setweapon function to get his weapon, contrarily to HumanA
void		HumanB::setWeapon(Weapon &desiredWeapon)
{
	this->hisWeapon = &desiredWeapon;
}

void	HumanB::attack()
{
	if (!hisWeapon)
	{
		std::cout << name << " : HELP I dont have a WeApON!!!" << std::endl;
		return ;
	}
	std::cout << name << " attacks with their " << this->hisWeapon->getType() << std::endl;
}
