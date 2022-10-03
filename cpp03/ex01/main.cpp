#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

int main()
{
	ScavTrap test("guardian");

	test.attack("RIRIRIRIR");

	for (int i = 0; i < 50; i++)
		test.attack("maximus");
	std::cout << "\n\n";
	for (int i = 0; i < 100; i++)
		test.takeDammage(1);

	test.guardGate();
	return (0);
}
