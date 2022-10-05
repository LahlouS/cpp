#include "WrongAnimal.hpp"

Animal::Animal() : type("defaultAnimal"){
	std::cout << "[Animal] Default constructor has been called\n";
}
Animal::Animal(std::string const & assignement) : type(assignement){
	std::cout << "[Animal] Assignement constructor has been called\n";
}

Animal::Animal(Animal const & to_assign){
	std::cout << "[Animal] Copy construcor has been called\n";
	*this = to_assign;
}

Animal & Animal::operator=(Animal const & to_assign){
	this->type = to_assign.type;
	return (*this);
}

Animal::~Animal(){
	std::cout << "[Animal] Destructor has been called\n";
}

std::string const & Animal::getType(void) const{
	return (this->type);
}

void	Animal::makeSound(void) const{
	std::cout << "[Animal] generic animal noise\n";
}
