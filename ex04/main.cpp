#include <iostream>
#include <string>
#include <fstream>

static	std::string	get_replacement_filename(char *string, std::string extension);

/*
 *	Replaces all the occurences if 'search' with 'replacement' in a file. 
 *	Uses character by character reading to handle partial matches correctly.
 *	
 *	Algorithm: Track position in search string. On mismatch after a partial match, output the 
 * 	matched portion to the output file and reset the tracker. On complete match, output the replacement.
*/
void	ft_replace(const std::string &original_filename,
			const std::string &output_filename,
			const std::string &search,
			const std::string &replacement)
{
	std::ifstream	original_file(original_filename);
	std::ofstream	replace_file(output_filename.c_str());

	char	c;
	size_t	search_position = 0;
	while (original_file.get(c))
	{
		//Partial match failed - outut what we matched so far
		if (c != search[search_position] && search_position > 0)
		{
			replace_file << search.substr(0, search_position);
			search_position = 0;
		}
		//Character matched to 'search', increment the tracker
		if (c == search[search_position])
		{
			search_position += 1;
			// end of string using the tracker - found a complete search: we can replace
			if (search[search_position] == '\0')
			{
				replace_file << replacement;
				search_position = 0;
			}
		}
		//No partial match and no matching character, we output the character we read.
		else
		{
			replace_file << c;
		}
	}
	//Partial match found but EOF reached before a complete match - outputs what was found to output file.
	if (search_position)
		replace_file << search.substr(0, search_position);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Error: Invalid program input, please give: <filename> <string to find> <replacement string>" << std::endl;
	std::string	original_filename = argv[1];
	std::string	output_filename = get_replacement_filename(argv[1], ".replace");
	std::string	search = argv[2];
	std::string replacement = argv[3];

	ft_replace(original_filename, output_filename, search, replacement);
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
