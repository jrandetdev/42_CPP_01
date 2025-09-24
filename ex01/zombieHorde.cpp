#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	//edge case 1) zombie does not have a name
	if (name.empty())
	{
		std::cout << "\nError: Zombie must have a name." << '\n';
		return (NULL);
	}

	//edge case 2) 0 zombies called
	if (N <= 0)
	{
		std::cout << "\nError: Hord must have at least one zombie\n";
		return (NULL);
	}

	//Pre-allocate memory buffer
	void	*buffer = operator new[] (N * sizeof(Zombie));
	Zombie *horde = (Zombie *)buffer;
	for (int i = 0; i < N; ++i)
	{
		new(&horde[i]) Zombie(name);
	}
	return (horde);
}
