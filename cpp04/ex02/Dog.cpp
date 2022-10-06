#include "Dog.hpp"


Dog::Dog() : Animal::Animal() {
	this->type = "dog";
	this->brain = new Brain;
	std::cout << "[Dog] default constructor has been called\n";
}

Dog::Dog(std::string const & assignement) : Animal::Animal(assignement){
	this->type = assignement;
	std::cout << "[Dog] assignement constructor has been called\n";
}

Animal & Dog::operator=(Animal const & to_assign){
	std::cout << "surcharge du egale de DOG\n";
	this->type = to_assign.getType();
	delete this->brain;
	this->brain = new Brain();
	*(this->brain) = *(((Dog *)&to_assign)->brain);
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

void	Dog::setIdea(std::string to_assign, int i){
	this->brain->setIdea(to_assign, i);
}

std::string	& Dog::getIdea(int i){
	return(this->brain->getIdea(i));
}

