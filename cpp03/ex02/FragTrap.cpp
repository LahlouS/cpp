#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>


FragTrap::FragTrap() : ClapTrap::ClapTrap(){
	_hitPoint = 100;
	_energyPoints = 100;
	_dammage = 30;
	std::cout << "[FragTrap] default constructor has been called\n";
}

FragTrap::FragTrap(std::string const & name) : ClapTrap::ClapTrap(name){
	_hitPoint = 100;
	_energyPoints = 100;
	_dammage = 30;
	std::cout << "[FragTrap] constructor has been called for [ " << name << " ]\n";
	//std::cout << "---> " << _hitPoint << " " << _energyPoints << " " << _dammage << "\n";
}

FragTrap::FragTrap(FragTrap const & cpy){
	*this = cpy;
}

FragTrap::~FragTrap(){
	std::cout << "[FragTrap] " << "destructor has been called for " << _name << std::endl;
}


void	FragTrap::attack(const std::string& target){
	if (this->_energyPoints > 0 && this->_hitPoint > 0)
	{
		this->_energyPoints -= 1;
		std::cout << "[FragTrap] " << this->_name << " attacks " << target \
		<< " causing " << _dammage << " point of dammage" << std::endl;
	}
	else if (this->_energyPoints <= 0)
		std::cout << "[FragTrap] " << this->_name << " has no power enough to fight" << std::endl;
	else if (this->_hitPoint <= 0)
		std::cout << "[FragTrap] " << this->_name << " has no life anymore" << std::endl;

}

void	FragTrap::highFivesGuys(void){
	std::cout << "[FragTrap] " << _name << " may i have a high five guys ?" << std::endl;
}
