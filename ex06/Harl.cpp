#include "Harl.hpp"

Harl::Harl()
{
	function_ptr_array[0].f = &Harl::debug;
	function_ptr_array[0].level = std::string("DEBUG");
	function_ptr_array[1].f = &Harl::info;
	function_ptr_array[1].level = std::string("INFO");
	function_ptr_array[2].f = &Harl::warning;
	function_ptr_array[2].level = std::string("WARNING");
	function_ptr_array[3].f = &Harl::error;
	function_ptr_array[3].level = std::string("ERROR");

	//std::cout << "Harl: default constructor called" << std::endl;
}

Harl::~Harl()
{
	//std::cout << "Harl: default destructor called" << std::endl;
}

//best practice: line should not be longer than 80 characters long.
void	Harl::debug()
{
	std::cout << "I love having extra bacon for my "
			"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put "
		"enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for "
		"years, whereas you started working here just last month.\n";
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	int i = 0;
	while (i < 4)
	{
		if (function_ptr_array[i].level == level)
			break;
		i++;
	}
	switch (i)
	{
		case DEBUG:
			std::cout << "[DEBUG]" << '\n';
			(this->*function_ptr_array[0].f)();
			__attribute__ ((fallthrough));
		case INFO:
			std::cout << "[INFO]" << '\n';
			(this->*function_ptr_array[1].f)();
			__attribute__ ((fallthrough));
		case WARNING:
			std::cout << "[WARNING]" << '\n';
			(this->*function_ptr_array[2].f)();
			__attribute__ ((fallthrough));
		case ERROR:
			std::cout << "[ERROR]" << '\n';
			(this->*function_ptr_array[3].f)();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}

}