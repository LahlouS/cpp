#include "Cat.hpp"


Cat::Cat() : Animal::Animal(){
	this->type = "cat";
	this->brain = new Brain;
	std::cout << "[cat] default constructor has been called\n";
}

Cat::Cat(std::string const & assignement) : Animal::Animal(assignement){
	this->type = assignement;
	std::cout << "[cat] assignement constructor has been called\n";
}

Animal & Cat::operator=(Animal const & to_assign){
	std::cout << "surcharge du egale de CAT\n";
	delete this->brain;
	this->brain = new Brain();
	*(this->brain) = *(((Cat *)&to_assign)->brain);
	this->type = to_assign.getType();
	return (*this);
}

Cat::Cat(Cat const & to_assign) : Animal::Animal(){
	(*this) = to_assign;
}

Cat::~Cat(){
	delete this->brain;
	std::cout << "[cat] Destructor has been called\n";
}

void	Cat::makeSound(void) const{
	std::cout << "Miaou Miaou Miaou\n";
}

void	Cat::setIdea(std::string to_assign, int i){
	this->brain->setIdea(to_assign, i);
}

std::string	& Cat::getIdea(int i){
	return(this->brain->getIdea(i));
}
