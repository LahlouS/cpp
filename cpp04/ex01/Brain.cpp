#include <iostream>
#include "Brain.hpp"


Cat::Cat() : Animal::Animal(){
	this->type = "cat";
	std::cout << "[cat] default constructor has been called\n";
}

Cat::Cat(std::string const & assignement) : Animal::Animal(assignement){
	this->type = assignement;
	std::cout << "[cat] assignement constructor has been called\n";
}

Cat & Cat::operator=(Cat const & to_assign){
	this->type = to_assign.type;
	return (*this);
}

Cat::Cat(Cat const & to_assign) : Animal::Animal(){
	(*this) = to_assign;
}
