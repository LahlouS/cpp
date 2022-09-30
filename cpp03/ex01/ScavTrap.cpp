#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>


ScavTrap::ScavTrap() : ClapTrap::ClapTrap() {
	std::cout << "[ScavTrap] default constructor has been called\n";
}

ScavTrap::ScavTrap(std::string const & name) : ClapTrap::ClapTrap(name){
	std::cout << "[ScavTrap] constructor has been called for [ " << name << " ]\n";
}

ScavTrap::ScavTrap(ScavTrap const & cpy){
	*this = cpy;
}

ScavTrap::~ScavTrap(){
	 ClapTrap::~ClapTrap();
	std::cout << "[ScavTrap] " << ClapTrap::_name << "destructor has been called" << std::endl;
}


void	ScavTrap::attack(const std::string& target){
	if (this->_energyPoints > 0 && this->_hitPoint > 0)
	{
		this->_energyPoints -= 1;
		std::cout << "[ScavTrap] " << this->_name << " attacks " << target \
		<< " causing " << _dammage << " point of dammage" << std::endl;
	}
	else if (this->_energyPoints <= 0)
		std::cout << "[ScavTrap] " << this->_name << " has no power enough to fight" << std::endl;
	else if (this->_hitPoint <= 0)
		std::cout << "[ScavTrap] " << this->_name << " has no life anymore" << std::endl;

}

void	ScavTrap::guardGate(void){
	std::cout << "[ScavTrap] " << _name << " entered Gate keeper mode !!!" << std::endl;
}

