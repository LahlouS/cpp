#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("defaultWrongAnimal"){
	std::cout << "[WrongAnimal] Default constructor has been called\n";
}
WrongAnimal::WrongAnimal(std::string const & assignement) : type(assignement){
	std::cout << "[WrongAnimal] Assignement constructor has been called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const & to_assign){
	std::cout << "[WrongAnimal] Copy construcor has been called\n";
	*this = to_assign;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & to_assign){
	this->type = to_assign.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(){
	std::cout << "[WrongAnimal] Destructor has been called\n";
}

std::string const & WrongAnimal::getType(void) const{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const{
	std::cout << "[WrongAnimal] generic WrongAnimal noise\n";
}
