#include <iostream>
#include "Fixed.hpp"

int const Fixed::_fract = 8;

Fixed::Fixed() : _nb(0){
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

Fixed::Fixed(int const to_convert){
	this->_nb = to_convert << _fract;
}

Fixed::Fixed(float const to_convert){
	
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called\n";
	return (_nb);
}

void	Fixed::setRawBits(int const raw){
	this->_nb = raw;
}

Fixed & Fixed::operator=(Fixed const & to_assign){
	std::cout << "overload of assignement operator has been called\n";
	this->_nb = to_assign.getRawBits();
	return (*this);
}
