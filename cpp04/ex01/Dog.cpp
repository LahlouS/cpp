#include "Dog.hpp"


Dog::Dog() : Animal::Animal() {
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << "[Dog] default constructor has been called\n";
}

Dog::Dog(std::string const & assignement) : Animal::Animal(assignement){
	this->type = assignement;
	std::cout << "[Dog] assignement constructor has been called\n";
}

Dog & Dog::operator=(Dog const & to_assign){
	this->type = to_assign.type;
	return (*this);
}

Dog::Dog(Dog const & to_assign) : Animal::Animal(){
	(*this) = to_assign;
}

Dog::~Dog(){
	delete this->brain;
	std::cout << "[Dog] Destructor has been called\n";
}

void	Dog::makeSound(void) const{
	std::cout << "Wouaf Wouaf Wouaf\n";
}

