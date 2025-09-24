#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl: default constructor called" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl: default destructor called" << std::endl;
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
	void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string level_options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	int i = 0;
	while (i < 4)
	{
		if (level_options[i] == level)
			break ;
		i++;
	}
	switch (i)
	{
		case DEBUG:
			std::cout << "[DEBUG]" << '\n';
			(this->*f[0])();
			__attribute__ ((fallthrough));
		case INFO:
			std::cout << "[INFO]" << '\n';
			(this->*f[1])();
			__attribute__ ((fallthrough));
		case WARNING:
			std::cout << "[WARNING]" << '\n';
			(this->*f[2])();
			__attribute__ ((fallthrough));
		case ERROR:
			std::cout << "[ERROR]" << '\n';
			(this->*f[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}

}
