#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <string>

int main()
{
// 	DiamondTrap trap("Diamond");
// 	// ScavTrap scav;
// 	// FragTrap frag;
// trap.whoAmI();
// 	std::cout << std::endl;
// 	trap.print();
// 	std::cout << std::endl;
// 	trap.attack("lllllllllllllllllllllll");
// 	// scav.print();
// 	// frag.print();

	FragTrap frag("test");
	FragTrap frag2("test2");
	
	frag = frag2;

	return (0);
}
