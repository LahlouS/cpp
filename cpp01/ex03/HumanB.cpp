#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string assignation) : name(assignation){
	//std::cout << name << ": Constructor has been called\n";
}

HumanB::~HumanB(){
//	std::cout << name << ": Destructor has been called\n";
}

void	HumanB::attack(void) const{
	std::cout << this->name << " attack with his " << this->weapon->getType() << "\n";
}

void	HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
}
