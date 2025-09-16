#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
//#include <new>

class Zombie{
	public:
		Zombie(std::string s);
		~Zombie();
		void	announce(void);
	private:
		std::string name;

} ;

Zombie* zombieHorde(int N, std::string name);

#endif