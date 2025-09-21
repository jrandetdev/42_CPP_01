#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

typedef struct	funct_ptr_select
{
	int	level;
	void (Harl::*f) (void);
}	;

class Harl
{
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
}	;

#endif
