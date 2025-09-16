#include "Zombie.hpp"

/**
 * Here I used operator new[] to 
 * - allocate all the memory at once (efficient)
 * - I initilaised every object with its own constructor individually
 */
Zombie* zombieHorde(int N, std::string name)
{
	//here operator new [] allocates raw memory for N zombies
	void	*raw_memory = operator new[](N *sizeof(Zombie));
	Zombie *ptr = static_cast<Zombie *>(raw_memory);
	if (!ptr)
		return (NULL);
	for (int i = 0; i < N; ++i) {
		//this is the use of placement new which constructs memory on allocated
		//memory.
		new(&ptr[i]) Zombie(name);
	}

	return (ptr);
}

