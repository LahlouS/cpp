#include "WrongCat.hpp"


WrongCat::WrongCat() : WrongAnimal::WrongAnimal(){
	this->type = "WrongCat";
	std::cout << "[WrongCat] default constructor has been called\n";
}

WrongCat::WrongCat(std::string const & assignement) : WrongAnimal::WrongAnimal(assignement){
	this->type = assignement;
	std::cout << "[WrongCat] assignement constructor has been called\n";
}

WrongCat & WrongCat::operator=(WrongCat const & to_assign){
	this->type = to_assign.type;
	return (*this);
}

WrongCat::WrongCat(WrongCat const & to_assign) : WrongAnimal::WrongAnimal(){
	(*this) = to_assign;
}

void	WrongCat::makeSound(void) const{
	std::cout << "Miaou Miaou Miaou\n";
}

