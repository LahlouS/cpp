#include "DiamondTrap.hpp"
#include <string>
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap::ClapTrap(), FragTrap::FragTrap(),  ScavTrap::ScavTrap(){
	// a voir pour l'initialisation
	this->_name = "default";
	std::cout << "[DIAMONDTRAP] default constructor has been called\n";
}

DiamondTrap::DiamondTrap(std::string const & assignement) : ClapTrap::ClapTrap(assignement + "_clap_name"), FragTrap(assignement + "_clap_name"), ScavTrap(assignement + "_clap_name"){
	// a voir pour l'initialisation
	this->_dammage = 30;
	this->_name = assignement;
	std::cout << "[DIAMONDTRAP] assignement constructor has been called\n";
}

DiamondTrap::DiamondTrap(DiamondTrap const & cpy){
	*this = cpy;
}
DiamondTrap::~DiamondTrap(){
	std::cout << "Destructor for [DIAMONDTRAP] has been called\n";
}

void	DiamondTrap::whoAmI()
{
	std::cout << "In whoAmI function, here is my name: " << this->_name << "\n";
	std::cout << "And here is My parent name (sub_object name): " << ClapTrap::_name << "\n";
}
