#include <iostream>
#include <string>
#include <fstream>

static	std::string	get_replacement_filename(char *string, std::string extension);

std::string	ft_replace(std::string &str, const std::string &search, const std::string &replace)
{
	size_t	pos = str.find(search);
	if (pos == str.npos)
		return str;
	while (pos != str.npos)
	{
		str.erase(pos, search.size());
		str.insert(pos, replace);
		pos = str.find(search, pos + replace.size());
	}
	return (str);
}


void	read_and_treat_file(const std::string &original_filename,
				const std::string &output_filename,
				const std::string &search,
				const std::string &replace)
{
	std::ifstream	original_file(original_filename.c_str());
	std::ofstream	replace_file(output_filename.c_str());
	std::string		mystring;
	
	if (original_file.is_open()){
		while (getline(original_file, mystring))
		{
			mystring = ft_replace(mystring, search, replace);
			replace_file << mystring;
			if (original_file.peek() != EOF)
				replace_file << '\n';
		}
	}
	else
	{
		std::cout << "Error: Could not open file." << '\n';
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Error: Invalid program input, please give: <filename> <string to find> <replacement string>" << std::endl;
	std::string	original_filename = argv[1];
	std::string	output_filename = get_replacement_filename(argv[1], ".replace");
	std::string	search = argv[2];
	std::string replacement = argv[3];

	read_and_treat_file(original_filename, output_filename, search, replacement);
	return (0);
}

/*
*	Looks if the filename contains an extension, and replaces it with .replace if found.
*	If no extension, it appends .replace (extenssion) directly.
*/
static	std::string	get_replacement_filename(char *string, std::string extension)
{
	std::string original_filename = string;
	size_t	last_dot_position = original_filename.find_last_of('.');

	if (last_dot_position == original_filename.npos)
		return (original_filename + extension);
		
	std::string replace_filename = original_filename.substr(0, last_dot_position) + extension;
	return (replace_filename);
}
