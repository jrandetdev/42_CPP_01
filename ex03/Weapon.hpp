#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	public:
		Weapon();
		~Weapon();
		Weapon(std::string desiredWeapon);
		const std::string&	getType() const; 
		void				setType(std::string s);
		
	private:
		std::string type;
};

#endif
