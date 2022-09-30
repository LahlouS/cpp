#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap test("brutus");
	ClapTrap test2;//(test);

	for (int i = 0; i < 6; i++)
		test.attack("maximus");
	std::cout << "\n\n";
	for (int i = 0; i < 7; i++)
		test.takeDammage(1);
	test2 = test;
	std::cout << "\n\n";
	for (int i = 0; i < 15; i++)
		test2.beRepaired(12);
	return (0);
}
