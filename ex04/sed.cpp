#include "Sed.hpp"

Sed::Sed(/* args */)
{

}

Sed::~Sed()
{

}

bool	Sed::read_and_replace_succeded(std::ofstream &MyFile)
{
	std::string myText;
	
	std::ifstream MyReadFile(this->original_file.c_str());
	while (getline (MyReadFile, myText))
	{
		if (std::cin.eof())
		{
			std::cout << "Error: EOF reached" << std::endl;
			return (false);
		}
		if (myText == this->string_to_replace)
			MyFile << this->replacement_string;
		else
			MyFile << myText;
		MyFile << '\n';
	}
	return (true);
}

void	Sed::replace_extension(std::string extension)
{
	this->new_file = this->original_file.substr(0, this->original_file.find_last_of('.')) + extension;
}

bool	Sed::open_file_succeded()
{
	this->FileName.open(this->original_file.c_str(), std::ios::in);
	if (!FileName)
	{
		std::cout << "Error: File does not exist." << std::endl;
		return (false);
	}
	return (true);
}
