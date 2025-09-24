#include "Zombie.hpp"


int main()
{
	//EDGE CASE TESTING

	//Test A: 0 zombies
	{
		int N = -1;

		std::string name = "Bob";

		Zombie *horde = zombieHorde(N, name);
		if (!horde)
		{
			std::cout << "Test A for N <= 0 zombie succeeded" << '\n';
		}
		//horde->~Zombie();
	}
	//Test B: zombie with no name
	{
		
		int N = 2;

		Zombie *horde = zombieHorde(N, "");

		if (!horde)
		{
			std::cout << "Test B for empty zombie name succeeded\n" << '\n';
			//return (1);
		}
		//horde->~Zombie();
	}
	//Test C: 1 zombie
	{
		int N = 1;

		std::string name = "Charlie";

		Zombie *horde = zombieHorde(N, name);
		if (!horde)
			return (1);

		for (int i = 0; i < N ; ++i)
		{
			horde[i].announce();
		}

		std::cout << "Test C for one zombie in horde succeeded\n";
		for (int i = N - 1; i >= 0; --i)
			horde[i].~Zombie();
		operator delete[] (horde);
	}
	//Test D: 2 zombies
	{
		std::cout << '\n' ;

		std::string name = "ALICE";

		int N = 2;

		Zombie *horde = zombieHorde(N, name);

		for (int i = 0; i < N ; ++i)
		{
			horde[i].announce();
		}

		std::cout << "Test D for 2 zombies in horde succeeded\n";
		for (int i = N - 1; i >= 0; --i)
			horde[i].~Zombie();
		operator delete[] (horde);
	}

	return (0);
}

