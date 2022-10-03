#include <iostream>
#include <string>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoint(10), _energyPoints(10), _dammage(0) {
	//std::cout << "Default construcot has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string const & name) : _name(name), _hitPoint(10), _energyPoints(10), _dammage(0) {
	std::cout << "[ClapTrap] Assignement constructor has been called for " << "[" << _name << "]" << std::endl;
	//std::cout << "---> " << _hitPoint << " " << _energyPoints << " " << _dammage << "\n";
}


ClapTrap::ClapTrap(ClapTrap const & cpy){
	*this = cpy;
}

ClapTrap::~ClapTrap(){
	std::cout << "[ClapTrap] " << " destructor has been called for " << this->_name << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & to_assign){
	std::cout << "IIIIIIIIIIIIIIIIIIIIIICICICICICI" << std::endl;
	_name = to_assign._name;
	_hitPoint = to_assign._hitPoint;
	_energyPoints = to_assign._energyPoints;
	_dammage = to_assign._dammage;
	return(*this);
}

void		ClapTrap::attack(const std::string& target){
	if (this->_energyPoints > 0 && this->_hitPoint > 0)
	{
		this->_energyPoints -= 1;
		std::cout << "ClapTrap " << this->_name << " attacks " << target \
		<< " causing " << _dammage << " point of dammage" << std::endl;
	}
	else if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " has no power enough to fight" << std::endl;
	else if (this->_hitPoint <= 0)
		std::cout << "ClapTrap" << this->_name << " has no life anymore" << std::endl;

}

void		ClapTrap::takeDammage(unsigned int ammount){
	if(ammount < this->_hitPoint)
	{
		_hitPoint -= ammount;
		std::cout << "ClapTrap " << this->_name << " has taken " << ammount << " dammage ";
		std::cout << "and still have " << this->_hitPoint << " hit point" << std::endl;
	}
	else if (this->_hitPoint)
	{
		_hitPoint = 0;
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;

	}
	else
		std::cout << "ClapTrap " << this->_name << " is already dead, stop the hagar please" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int ammount){
	if (this->_energyPoints > 0 && this->_hitPoint > 0)
	{
		this->_energyPoints -= 1;
		this->_hitPoint += ammount;
		std::cout << "ClapTrap " << this->_name << " healed with " << ammount << " hitpoints [total: " << _hitPoint << "]\n";
	}
	else if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " has no power enough to heal" << std::endl;
	else if (this->_hitPoint <= 0)
		std::cout << "ClapTrap" << this->_name << " too late im dead !!!!!!!!!!" << std::endl;
}

void		ClapTrap::print(void){
	std::cout << "******PRINT*******\n";
	std::cout << "name: " << _name << std::endl;
	std::cout << "hitpoint: " << _hitPoint << std::endl;
	std::cout << "energypoint: " << _energyPoints << std::endl;
	std::cout << "dammage: " << _dammage << std::endl;
	std::cout << "******END OF PRINTING*******\n";

}


