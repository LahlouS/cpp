#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_ass) : type(weapon_ass){
//	std::cout << "Weapon CONSTRUCTOR has been called\n";
}

Weapon::~Weapon(){
//	std::cout << "Weapon DESTRUCTOR has been called\n";
}

std::string& Weapon::getType(void){
	return (type);
}

void	Weapon::setType(std::string new_type){
	type = new_type;
}
