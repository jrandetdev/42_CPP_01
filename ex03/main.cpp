#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	
	//two scopes in these functions, meaning the constructor and destructor are called for the weapon
	{
		Weapon	club = Weapon("crude spike club");
		
		HumanA bob("Bob", club); 
		bob.attack();

		club.setType("some other type of club");
		bob.attack();
	}
	std::cout << '\n';
	{
		Weapon club = Weapon("crude spiked club");

		HumanB	jim("Jim");
		jim.setWeapon(club);
		jim.attack();

		std::cout << '\n';
		club.setType("Some other type of club");
		jim.attack();
	}
		std::cout << '\n';
	//Test case with no weapon
	{
		std::cout << "CASE WHERE HE DOES NOT HAVE A WEAPON (nullptr)\n";
		Weapon club = Weapon("crude spiked club");

		HumanB	jim("Jim");
		//jim.setWeapon(club);
		jim.attack();

		std::cout << '\n';
		club.setType("Some other type of club");
		jim.attack();
	}

	return (0);
}
