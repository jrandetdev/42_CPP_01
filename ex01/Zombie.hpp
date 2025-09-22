#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
//#include <new>

class Zombie{
	public:
		Zombie(std::string s);
		~Zombie();
	private:
		std::string name;
		void	announce(void);

} ;

Zombie* zombieHorde(int N, std::string name);

#endif