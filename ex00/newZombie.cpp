#include "Zombie.hpp"

//Here, we define a pointer to the Zombie class zombiePtr with new, and return it.
//this means the calling function has access to the private members via the pointer.
Zombie*				newZombie(std::string name)
{
	//new allocates zombies to the heap, making it available to the main function
	//calling it.
	Zombie	*zombiePtr = new Zombie(name);
	return (zombiePtr);
}
