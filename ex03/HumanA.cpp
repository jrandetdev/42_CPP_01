#include "HumanA.hpp"

//HumanA is named and takes his weapon inside his constructor, I used the list initialisation for this
HumanA::HumanA(std::string desiredName, Weapon &desiredWeapon) : hisWeapon(desiredWeapon)
{
	this->name = desiredName;
	std::cout << "HumanA constructor called" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA default destructor called" << std::endl;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << (this->hisWeapon).getType() << std::endl;
}
