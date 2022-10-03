#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>


ScavTrap::ScavTrap() : ClapTrap::ClapTrap(){
	_hitPoint = 100;
	_energyPoints = 50;
	_dammage = 20;
	std::cout << "[ScavTrap] default constructor has been called\n";
}

ScavTrap::ScavTrap(std::string const & name) : ClapTrap::ClapTrap(name){
	_hitPoint = 100;
	_energyPoints = 50;
	_dammage = 20;
	std::cout << "[ScavTrap] constructor has been called for [ " << name << " ]\n";
	//std::cout << "---> " << _hitPoint << " " << _energyPoints << " " << _dammage << "\n";
}

ScavTrap::ScavTrap(ScavTrap const & cpy){
	*this = cpy;
}

ScavTrap::~ScavTrap(){
	std::cout << "[ScavTrap] " << "destructor has been called for " << _name << std::endl;
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

