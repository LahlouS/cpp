#include <iostream>

int main()
{
	std::string	str("HI, I'M THE BRAIN");
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << std::endl;
	std::cout << "**********PRINTING DE ADDR**********\n";
	std::cout << "&str = " << &str << "\n";
	std::cout << "stringPTR = " << stringPTR << "\n";
	std::cout << "&strinREF = " << &stringREF << "\n";
	std::cout << "************************************\n";
	std::cout << std::endl;
	std::cout << "**********PRINTING DE VALUE**********\n";
	std::cout << "str = " << str << "\n";
	std::cout << "*stringPTR = " << *stringPTR << "\n";
	std::cout << "strinREF = " << stringREF << "\n";
	std::cout << "*************************************\n";
	return (0);
}
