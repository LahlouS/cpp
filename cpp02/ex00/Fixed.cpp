#include <iostream>
#include "Fixed.hpp"

int const Fixed::fract = 8;

Fixed::Fixed() : nb(0){
	std::cout << "default constructor has been called\n";
	return ;
}

Fixed::Fixed(Fixed const & cpy){

	std::cout << "Copy constructor called\n";
	*this = cpy;
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
	return ;
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called\n";
	return (nb);
}

void	Fixed::setRawBits(int const raw){
	this->nb = raw;
}

Fixed & Fixed::operator=(Fixed const & to_assign){
	std::cout << "overload of assignement operator has been called\n";
	this->nb = to_assign.getRawBits();
	return (*this);
}
