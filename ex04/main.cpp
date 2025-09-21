#include <iostream>
#include <string>
#include <fstream>

static	std::string	get_replacement_filename(char *string, std::string extension);

// std::string	check_and_replace_strings_in_line(std::string &string_to_modify, std::string const &string_to_replace, std::string const &replace_by)
// {
// 	size_t	pos = string_to_modify.find(string_to_replace);
// 	if (pos == string_to_modify.npos)
// 		return (string_to_modify);
// 	while (pos != string_to_modify.npos)
// 	{
// 		string_to_modify.erase(pos, string_to_replace.size());
// 		string_to_modify.insert(pos, replace_by);
// 		pos = string_to_modify.find(string_to_replace, pos + replace_by.size());
// 	}
// 	return (string_to_modify);
// }

// bool	read_from_file(char **argv, std::string replacement_filename)
// {
// 	std::string	original_filename = argv[1];
// 	std::string const string_to_replace = argv[2];
// 	std::string const replace_by = argv[3];
	
// 	std::ifstream	original_file(original_filename, std::ios::in);
// 	std::string		mytempstring;
// 	if (original_file.is_open()){
// 		std::ofstream 	replacement_file(replacement_filename.c_str(), std::ios::out);
// 		while (std::getline (original_file, mytempstring))
// 		{
// 			mytempstring = check_and_replace_strings_in_line(mytempstring, string_to_replace, replace_by);
// 			replacement_file << mytempstring;
// 			if (original_file.peek() != EOF)
// 				replacement_file << '\n';
// 		}
// 	}
// 	else {
// 		std::cout << "Error: Couldn't open file\n";
// 		return (false);
// 	}
// 	return (true);
// }

void	ft_replace(std::string &original_filename, std::string &replacement_filename, std::string &search, std::string &replacement)
{
	std::ifstream	original_file(original_filename);
	std::ofstream	replace_file(replacement_filename.c_str());
	std::string		buffer = "";

	char	c;
	size_t	char_index = 0;
	while (original_file.get(c))
	{
		if (c != search[char_index] && char_index > 0)
		{
			replace_file << search.substr(0, char_index);
			char_index = 0;
		}
		if (c == search[char_index])
		{
			char_index += 1;
			if (search[char_index] == '\0')
			{
				replace_file << replacement;
				char_index = 0;
			}
		}
		else
		{
			replace_file << c;
		}
	}
	if (char_index)
		replace_file << search.substr(0, char_index);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Error: Invalid program input, please give: <filename> <string to find> <replacement string>" << std::endl;
	std::string	original_filename = argv[1];
	std::string	replacement_filename = get_replacement_filename(argv[1], ".replace");
	std::string	search = argv[2];
	std::string replacement = argv[3];

	ft_replace(original_filename, replacement_filename, search, replacement);
	return (0);
}

static	std::string	get_replacement_filename(char *string, std::string extension)
{
	std::string original_filename = string;
	size_t	last_dot_position = original_filename.find_last_of('.');

	if (last_dot_position == original_filename.npos)
		return (original_filename + extension);
		
	std::string replace_filename = original_filename.substr(0, last_dot_position) + extension;
	return (replace_filename);
}
