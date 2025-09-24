#include "Zombie.hpp"

//Name is private, and we are using two different methods to access the pointer.

int main()
{
	Zombie	*zombiePtr;

	randomChump("Charlie");
	randomChump("Leonard");
	

	std::cout << "\nHeap used, pointer is returned and we can access private member." << '\n';
	zombiePtr = newZombie("Bob");
	zombiePtr->announce();
	delete(zombiePtr);
	zombiePtr = NULL;

	return (0);
}
