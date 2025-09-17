#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	public:
		Weapon(/* args */);
		~Weapon();
		const std::string&	getType() const; 
		void				setType(std::string s);
	private:
		std::string type;
};


#endif