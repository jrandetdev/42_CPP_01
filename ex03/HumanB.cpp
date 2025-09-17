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