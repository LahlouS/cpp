#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string assignation, Weapon& first_weapon) : weapon(first_weapon), name(assignation){
//	std::cout << name << ": Constructor has been called\n";
}

HumanA::~HumanA(){
//	std::cout << name << ": Destructor has been called\n";
}
void	HumanA::attack(void) const{
	std::cout << name << " attack with his " << weapon.getType() << "\n";
}
