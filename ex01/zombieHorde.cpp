#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	void	*raw_memory = operator new[](N *sizeof(Zombie));
	Zombie *ptr = static_cast<Zombie *>(raw_memory);
	for (int i = 0; i < N; ++i) {
		new(&ptr[i]) Zombie(name);
	}
	return (ptr);
}

