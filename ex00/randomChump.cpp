#include "Zombie.hpp"

// 1) Creates a zombie
// 2) names it
// 3) makes it anounce itself
// here I created another constructor to avoid using get and set functions.
void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}
