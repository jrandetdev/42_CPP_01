#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string desiredName);
		~HumanB();
		void		setWeapon(Weapon &desiredWeapon);
		void		attack();
	private:
	std::string		name;
	Weapon			*hisWeapon;
	
};

#endif
