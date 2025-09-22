#include "Zombie.hpp"

//Name is private, and we are using two different methods to access the pointer.

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	Zombie	*zombiePtr;

	std::cout << "Zombie allocated on the stack: " << std::endl;
	randomChump("Charlie");

	std::cout << "\nZombie allocated on the heap: " << std::endl;
	zombiePtr = newZombie("Bob");
	zombiePtr->announce();
	delete(zombiePtr);

	return (0);
}