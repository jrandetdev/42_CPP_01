#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string desiredName, Weapon &desiredWeapon);
		~HumanA();
		void	attack();
	private:
		Weapon		&hisWeapon;
		std::string	name;
		
};


#endif
