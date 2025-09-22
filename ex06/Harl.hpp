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
} ;

typedef struct	s_func_ptr
{
	std::string	level;
	void (Harl::*f) (void);
}	t_func_ptr;

class Harl
{
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
		void	filter(std::string level);
	private:
		t_func_ptr	function_ptr_array[4];
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
}	;



#endif
