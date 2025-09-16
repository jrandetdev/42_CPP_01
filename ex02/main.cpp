#include <iostream>

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	std::string string = "HI THIS IS BRAIN";

	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "The address of string is " << &string << std::endl;
	std::cout << "The address of string held by stringPTR is the same as the addres of the string " << stringPTR << std::endl;
	std::cout << "The address of the string held by stringREF is " << &stringREF << std::endl;

	std::cout << '\n';

	std::cout << "The value of the string variable is " << string << std::endl;
	std::cout << "The value pointed by stringPTR is " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF is " << stringREF << std::endl;

	return (0);
}