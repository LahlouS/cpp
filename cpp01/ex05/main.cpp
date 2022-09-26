#include <iostream>
#include "Harl.hpp"

int main()
{
	Harl Harl_test;

	Harl_test.complain("DEBUG");
	Harl_test.complain("INFO");
	Harl_test.complain("WARNING");
	Harl_test.complain("ERROR");
	return (0);
}
