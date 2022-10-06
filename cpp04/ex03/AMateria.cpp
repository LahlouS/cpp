#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria() : type("default"){
	std::cout << "[AMateria] Default constructor has been called\n";
}

AMateria::AMateria(std::string const & type) : type(type) {
	std::cout << "[AMateria] Assignement constructor has been called\n";
}

AMateria::AMateria(AMateria const & copy){
	std::cout << "[AMateria] copy constructor has been called\n";
	(*this) = copy;
}

AMateria::~AMateria(){
	std::cout << "[AMateria] Destrucor has been called\n";
}

AMateria&	AMateria::operator=(AMateria const & toAssign){
	std::cout << "[AMateria] = Overload has been called\n";
	this->type = toAssign.type;
	return (*this);
}

std::string	const & AMateria::getType(void) const{
	return (this->type);
}
