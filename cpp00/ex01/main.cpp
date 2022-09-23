#include <iostream>
#include <string>
//#include <istream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	std::string input = "START";
	PhoneBook	repertoire;
	for(;std::cout << "input : " && std::getline(std::cin, input);)
	{
		if (!input.compare("ADD"))
		{
			std::cout << "********************ADD*******************\n\n";
			repertoire.add_contact();
			std::cout << "******************************************\n\n";
		}
		else if (!input.compare("SEARCH"))
		{
			std::cout << "******************SEARCH******************\n\n";
			repertoire.search_contact();
			std::cout << "******************************************\n\n";
		}
		else if(!input.compare("EXIT"))
			break ;
		else if (input.compare("START"))
			std::cout << "****************ERROR INPUT****************\n\t\tallowed command :\n\t\t\t-->EXIT\n\t\t\t-->ADD\n\t\t\t-->SEARCH\n*******************************************\n";
	}
	return (0);
}
