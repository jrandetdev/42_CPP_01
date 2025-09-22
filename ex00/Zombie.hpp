#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
	public:
		Zombie(std::string name);
		~Zombie();
	private:
		std::string name;
		void announce(void);
} ;

Zombie*				newZombie(std::string name);
void 				randomChump(std::string name);

#endif