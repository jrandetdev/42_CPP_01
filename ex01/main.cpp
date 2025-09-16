#include "Zombie.hpp"


int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int N = 3;
	std::string name = "Charlie";

	Zombie *ptr = zombieHorde(N, name);

	for (int i = 0; i < N ; ++i)
	{
		ptr[i].announce();
	}

	for (int i = N - 1; i >= 0; --i)
		ptr[i].~Zombie();
	operator delete[] (ptr);

	std::cout << '\n' ;
	name = "ALICE";
	N = 2;
	ptr = zombieHorde(N, name);

	for (int i = 0; i < N ; ++i)
	{
		ptr[i].announce();
	}

	for (int i = N - 1; i >= 0; --i)
		ptr[i].~Zombie();
	operator delete[] (ptr);

	return (0);
}
