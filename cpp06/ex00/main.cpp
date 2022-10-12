#include "Conversion.hpp"
#include <iostream>
#include <string>

int main(int ac, char **av){
	if (ac == 2){

		if (*(*(av + 1)) == '0')
		{
			std::cout << "char: Non Displayable\n";
			std::cout << "int: 0\n";
			std::cout << "float: 0.0f\n";
			std::cout << "double: 0.0\n";
		} else {
			try{
				Conversion C((*(av + 1)));
			}
			catch (std::exception const & e){
				std::cout << e.what();
			}
		}
	} else {
		std::cout << "No valid input, only one argument is tolerate\n";
	}
	return (0);
}
