#include <iostream>
#include "IceCure.hpp"

/**********ICE*************/

Ice::Ice() : AMateria::AMateria("ice") {
	std::cout << "[Ice] Default constructor has been called\n";
}

Ice::Ice(std::string const & type) : AMateria::AMateria(type) {
	std::cout << "[Ice] Assignement constructor has been called\n";
}

Ice::Ice(AMateria const & copy) {
	(*this) = copy;
	std::cout << "[Ice] Copy constructor has been called\n";
}

Ice::~Ice() {
	std::cout << "[Ice] Destructor has been called\n";
}

AMateria	& Ice::operator=(AMateria const & toAssign){
	this->type = toAssign.getType();
	return (*this);
}

AMateria	* Ice::clone() const{
	AMateria *tmp = new Ice(this->type);
	return (tmp);
}

void		Ice::use(ICharacter & target){
	std::cout << "Ice: * shoots an ice bolt at " << target.getName() << " *\n";
}



/**************CURE**********/

Cure::Cure() : AMateria::AMateria("cure") {
	std::cout << "[Cure] Default constructor has been called\n";
}

Cure::Cure(std::string const & type) : AMateria::AMateria(type) {
	std::cout << "[Cure] Assignement constructor has been called\n";
}

Cure::Cure(AMateria const & copy) {
	(*this) = copy;
	std::cout << "[Cure] Copy constructor has been called\n";
}

Cure::~Cure() {
	std::cout << "[Cure] Destructor has been called\n";
}

AMateria	& Cure::operator=(AMateria const & toAssign){
	this->type = toAssign.getType();
	return (*this);
}

AMateria	* Cure::clone() const{
	AMateria *tmp = new Cure(this->type);
	return (tmp);
}

void		Cure::use(ICharacter & target){
	std::cout << "Cure: * heals " << target.getName() << "'s wounds *\n";
}
