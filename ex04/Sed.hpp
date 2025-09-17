#ifndef SED_HPP
# define SED_HPP

#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

class Sed
{
	private:

	public:
		Sed(/* args */);
		~Sed();
		std::fstream	FileName;
		std::ofstream 	MyFile;
		std::string 	original_file;
		std::string 	new_file;
		std::string 	string_to_replace;
		std::string 	replacement_string;
		bool			open_file_succeded();
		void			replace_extension(std::string extension);
		bool			read_and_replace_succeded(std::ofstream &MyFile);
};


#endif
