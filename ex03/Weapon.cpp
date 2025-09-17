#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Weapon: Default constructor called..." << std::endl;
}

Weapon::Weapon(std::string desiredWeapon)
{
	setType(desiredWeapon);
	std::cout << "Weapon type assigned is " << this->type << std::endl;
}

Weapon::~Weapon()
{

}

void	Weapon::setType(std::string s)
{
	this->type = s;
}

const std::string &Weapon::getType() const
{
	return (this->type);
}
