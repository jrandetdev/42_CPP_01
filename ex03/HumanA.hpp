#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string desiredName, Weapon desiredWeapon);
		~HumanA();
		std::string	name;
		Weapon		hisWeapon;
	private:
		void	attack();
};


#endif