#include <iostream>
#include <string>
#include <istream>
#include "header.hpp"

int main()
{
	std::string input = "START";
	PhoneBook	repertoire;
	//while (input.compare("EXIT"))
	for(;input.compare("EXIT");std::cout << "input : " && std::getline(std::cin, input))
	{
		if (!input.compare("ADD"))
			repertoire.add_contact();
		else if (!input.compare("SEARCH"))
			repertoire.search_contact();
		else if (input.compare("START"))
			std::cout << "error input\nallowed command :\n-->EXIT\n-->ADD\n-->SEARCH\n";
	}
	return (0);
}
