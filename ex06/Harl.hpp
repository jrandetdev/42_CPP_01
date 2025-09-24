#ifndef HARL_HPP
# define HARL_HPP
#define NB_HARL_ACTIONS 4

#include <string>
#include <iostream>

class Harl;

enum
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Harl
{
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
	private:
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
};

#endif
