#include "Zombie.hpp"


int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int N = 3;
	std::string name = "Charlie";

	Zombie *horde = zombieHorde(N, name);
	if (!horde)
		return (1);

	for (int i = 0; i < N ; ++i)
	{
		horde[i].announce();
	}

	for (int i = N - 1; i >= 0; --i)
		horde[i].~Zombie();
	operator delete[] (horde);

	//second test
	std::cout << '\n' ;
	name = "ALICE";
	N = 2;
	horde = zombieHorde(N, name);

	for (int i = 0; i < N ; ++i)
	{
		horde[i].announce();
	}

	for (int i = N - 1; i >= 0; --i)
		horde[i].~Zombie();
	operator delete[] (horde);

	return (0);
}
