#include <iostream>
#include <fstream>

void	replace_occurence(std::string& buffer, std::string s1, std::string s2)
{
	int	occurence = 0;

	while (1)
	{
		occurence = buffer.find(s1, occurence);
		if (occurence == std::string::npos)
			break ;
		buffer.erase(occurence, s1.size());
		buffer.insert(occurence, s2);
		occurence += s2.size();
		std::cout << occurence << "\n";
	}
}

int main(int ac, char **av)
{
	if (ac != 4)
		return (1);
	std::ifstream	infile(*(av + 1));
	std::ofstream	outfile(std::string(*(av + 1)).append(".replace"));
	std::string		buffer;
	char			c;

	if (infile && outfile)
	{
		while (infile.get(c))
			buffer.push_back(c);
		infile.close();
		replace_occurence(buffer, *(av + 2), *(av + 3));
		outfile << buffer;
	}
	else
		std::cout << "openings went wrong" << std::endl;
	return (0);
}
