#include <sstream>
#include <iostream>
#include <fstream>

int main(int ac, char **av){
	std::fstream infile;

	infile.open("infile.txt", std::fstream::in);
	if (!infile)
		std::cout << "infile.txt does not exist\n";
	else
	{
		char x;
		std::string	buf;
		while (std::getline(infile, buf))
		{
			std::cout << buf << std::endl;
		}
		std::cout << buf << std::endl;
	}
}
