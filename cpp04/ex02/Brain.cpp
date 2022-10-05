#include "Brain.hpp"


Brain::Brain(){
	std::cout << "[Brain] Default constuctor has been called\n";
}

Brain::Brain(std::string const & assignement){
	for (int i = 0; i < SIZE; i++)
		this->ideas[i] = assignement;
	std::cout << "[Brain] Assignement constructor as been called\n";
}

Brain::Brain(Brain const & to_assign){
	std::cout << "[Brain] Copy constructor as been called\n";
	*this = to_assign;
}

Brain & Brain::operator=(Brain const & to_assign){
	for (int i = 0; i < SIZE; i++)
		this->ideas[i] = to_assign.ideas[i];
	return (*this);
}

Brain::~Brain(){
	std::cout << "[Brain] Destructor has been called\n";
}

void	Brain::setIdea(std::string const & to_assign, int i){
	this->ideas[i] = to_assign;
}

std::string & Brain::getIdea(int i){
	return (this->ideas[i]);
}
