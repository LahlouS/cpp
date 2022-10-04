#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <string>

int main()
{
	DiamondTrap trap("Diamond");
	DiamondTrap trap2("Diamond2");
	// ScavTrap scav;
	// FragTrap frag;
	std::cout << std::endl;
	trap.whoAmI();
	std::cout << std::endl;
	trap.print();
	trap2.print();
	std::cout << std::endl;
	trap.attack("lllllllllllllllllllllll");
	trap.attack("lllllllllllllllllllllll");
	trap.attack("lllllllllllllllllllllll");
	trap.attack("lllllllllllllllllllllll");
	trap.attack("lllllllllllllllllllllll");
	trap.attack("lllllllllllllllllllllll");
	std::cout << std::endl;
	std::cout << std::endl;
	trap.print();
	trap2.print();
	std::cout << std::endl;
	std::cout << std::endl;
	trap2 = trap;
	std::cout << std::endl;
	std::cout << std::endl;
	trap.print();
	trap2.print();
	// scav.print();
	// frag.print();
	return (0);
}
