#include "Sed.hpp"



int main(int argc, char **argv)
{
	Sed f;
	if (argc != 4)
	{
		std::cout << "program takes in three params: filename, and two strings s1 and s2" << std::endl;
		return (1);
	}
	f.original_file = argv[1];
	f.string_to_replace = argv[2];
	f.replacement_string = argv[3];

	f.replace_extension(".replace");
	std::ofstream MyFile(f.new_file.c_str());
	if (!f.open_file_succeded())
		return (1);
	if (!f.read_and_replace_succeded(MyFile))
	{
		f.FileName.close();
		MyFile.close();
		return (1);
	}
	f.FileName.close();
	MyFile.close();
	return (0);
}
