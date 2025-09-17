#include "HumanA.hpp"

HumanA::HumanA(std::string desiredName, Weapon desiredWeapon)
{
	this->name = desiredName;
	Weapon(desiredWeapon);
}

HumanA::~HumanA()
{

}
