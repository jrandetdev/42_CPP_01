#include <iostream>
#include <string>
#include <fstream>

static	bool check_args(int argc, char **argv);

void	replace_strings_in_line(std::string )
{
	
}

bool	read_from_file(char **argv, std::ofstream &newfile)
{
	std::string	original_filename = argv[1];
	std::string replacement

	std::ifstream	orginal_file(original_filename, std::ios::in);
	std::string		mytempstring;
	if (orginal_file.is_open()){
		while (orginal_file){
			std::getline (orginal_file, mytempstring);
			

		}
	}
	else {
		std::cout << "Error: Couldn't open file\n";
		return (false);
	}
}

int main(int argc, char **argv)
{
	if (!check_args(argc, argv))
		return (1);
	std::string		replace_filename = get_replace_filename(argv[1], ".replace");
	std::ofstream 	replacement_file(replace_filename.c_str(), std::ios::out);
	read_from_file(argv, replacement_file);

}

static	bool check_args(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: Invalid program input, please give: <filename> <string to find> <replacement string>" << std::endl;
		return (false);
	}
}

static	std::string	get_replace_filename(char *string, std::string extension)
{
	std::string original_filename = string;
	size_t	last_dot_position = original_filename.find_last_of('.');

	if (last_dot_position == original_filename.npos)
		return (original_filename + extension);
		
	std::string replace_filename = original_filename.substr(0, last_dot_position) + extension;
	return (replace_filename);
}