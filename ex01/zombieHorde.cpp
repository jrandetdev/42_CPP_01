#include "Zombie.hpp"

/**
 * Here I used operator new[] to 
 * - allocate all the memory at once (efficient)
 * - I initilaised every object with its own constructor individually
 */
Zombie* zombieHorde(int N, std::string name)
{
	if (name.empty())
		std::cout << "Error: Zombie must have a name" << '\n';
	
	// here operator new [] allocates raw memory for N zombies
	void	*raw_memory = operator new[](N *sizeof(Zombie));

	// Transform the raw memory into a zombie pointer by using
	// a static cast with Zombie * as the dest type
	Zombie *horde = static_cast<Zombie *>(raw_memory);

	if (!horde)
		return (NULL);

	// Placement new is used to give each of them the name using
	// a constructor which takes an argument and new on the pointer.
	for (int i = 0; i < N; ++i)
	{
		new(&horde[i]) Zombie(name);
	}

	return (horde);
}

