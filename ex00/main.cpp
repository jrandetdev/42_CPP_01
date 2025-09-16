#include "Zombie.hpp"

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	Zombie	*zoimbiePtr;

	std::cout << "Zombie allocated on the stack: " << std::endl;
	randomChump("Charlie");

	std::cout << "\nZombie allocated on the heap: " << std::endl;
	zoimbiePtr = newZombie("Bob");
	delete(zoimbiePtr);

	return (0);
}