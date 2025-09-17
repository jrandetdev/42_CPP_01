#include "HumanA.hpp"
#include "HumanB.hpp"

// a pointer contains the memory address of a variable and can be reassigned
// a reference, on the other hand, is the address of a variable but is an allias.
//a pointer can be reasigned wheread a reference is tied to its allias.
// pointers offer multiple levels of indentation, a reference does not
// there is no reference arithmetic.


//Use reference in function parameters and return types.
//Use pointers if pointer arithmetic or passing a NULL pointer is needed (a reference cannot be NULL)
//Use references where you can, and pointers where you have to.
//references are usefyk in a class's public interface
//references typically appear on the skin of a class and pointers inside.


int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	Weapon	club = Weapon("crude spike club");
	std::cout << "the club type is a " << club.getType() << std::endl;
	return (0);
}