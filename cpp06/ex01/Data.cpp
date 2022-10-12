#include "Data.hpp"
#include <iostream>
#include <string>

Data::Data() : a(0), b(0), c(0){
	std::cout << "DATA --> Default constructor\n";
}

Data::Data(int a, float b, char c) : a(a), b(b), c(c){
	std::cout << "DATA --> Assignement constructor\n";
}

Data::Data(Data const & cpy){
	*this = cpy;
}

Data const & Data::operator=(Data const & toAssign){
	this->a = toAssign.a;
	this->b = toAssign.b;
	this->c = toAssign.c;
	return (*this);
}

Data::~Data(){
	std::cout << "DATA --> Destructor\n";
}

int	Data::getInt() const{
	return(this->a);
}

char	Data::getChar() const{
	return(this->c);
}

float	Data::getFloat() const{
	return(this->b);
}
