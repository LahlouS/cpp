#include <iostream>
#include <cmath>
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
	this->_nb = roundf(to_convert * (1 << this->_fract));
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called\n";
	return (_nb);
}

void	Fixed::setRawBits(int const raw){
	this->_nb = raw;
}

int	Fixed::toInt(void) const{
	return (_nb >> _fract);
}

float	Fixed::toFloat(void) const{
	return ((float)_nb / (1 << _fract));
}

Fixed & Fixed::operator=(Fixed const & to_assign){
	std::cout << "overload of assignement operator has been called\n";
	this->_nb = to_assign.getRawBits();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Fixed const & output){
	o << output.toFloat();
	return (o);
}