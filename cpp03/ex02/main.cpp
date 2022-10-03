#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

int main()
{
	// ScavTrap test("guardian");
	// ScavTrap scavtrap2;
	// FragTrap test1("highFive");

	// test.attack("RIRIRIRIR");

	// scavtrap2 = test;
	// for (int i = 0; i < 50; i++)
	// 	test.attack("maximus");
	// std::cout << "\n\n";
	// test.~ScavTrap();
	// for (int i = 0; i < 100; i++)
	// 	test.takeDammage(1);

	// std::cout << "\n\n\t******END OF SCAVTRAP TEST******\n\n";

	// test1.attack("RIRIRIRIR");
	// for (int i = 0; i < 50; i++)
	// 	test1.attack("maximus");
	// std::cout << "\n\n";
	// for (int i = 0; i < 100; i++)
	// 	test1.takeDammage(1);

	// test1.highFivesGuys();


	ScavTrap test("GUARDIAN");
	FragTrap test2("HIGHFIVE");

	test.attack("RANDOM");
	test2.attack("PPPPPPPPP");
	return (0);
}
