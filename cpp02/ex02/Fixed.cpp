#include <iostream>
#include <cmath>
#include "Fixed.hpp"

int const Fixed::_fract = 8;

Fixed::Fixed() : _nb(0){
	std::cout << "Default constructor has been called\n";
	return ;
}

Fixed::Fixed(Fixed const & cpy){
	std::cout << "Copy constructor has been called\n";
	this->_nb = cpy._nb;
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
	return ;
}

Fixed::Fixed(int const to_convert){
	this->_nb = to_convert << _fract;
}

Fixed::Fixed(float const to_convert){
	std::cout << "Constructor with float\n";
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
	std::cout << "Assignement operator overload called\n";
	this->_nb = to_assign.getRawBits();
	return (*this);
}

bool Fixed::operator<(Fixed const & to_assign) const{
	return (this->_nb < to_assign._nb);
}

bool Fixed::operator<=(Fixed const & to_assign) const{
	return (this->_nb <= to_assign._nb);
}

bool Fixed::operator>(Fixed const & to_assign) const{
	return (this->_nb > to_assign._nb);
}

bool Fixed::operator>=(Fixed const & to_assign) const{
	return (this->_nb >= to_assign._nb);
}
bool Fixed::operator==(Fixed const & to_assign) const{
	return (this->_nb == to_assign._nb);
}

bool Fixed::operator!=(Fixed const & to_assign) const{
	return (this->_nb != to_assign._nb);
}

Fixed	Fixed::operator+(Fixed const & to_add) const{
	return (Fixed(this->toFloat() + to_add.toFloat()));
}

Fixed	Fixed::operator-(Fixed const & to_sub) const{
	return (Fixed(this->toFloat() - to_sub.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & to_div) const{
	return (Fixed(this->toFloat() / to_div.toFloat()));
}

Fixed	Fixed::operator*(Fixed const & to_time) const{
	return (this->toFloat() * to_time.toFloat());
}

Fixed & Fixed::operator++(void){
	this->_nb += 1;
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed	old(*this);
	operator++();
	return(old);
}

Fixed & Fixed::operator--(void){
	this->_nb -= 1;
	return (*this);
}

Fixed Fixed::operator--(int){
	Fixed	old(*this);
	operator--();
	return(old);
}

Fixed const & Fixed::min(Fixed const & nb1, Fixed const & nb2){
	if (nb1 < nb2)
		return (nb1);
	else if (nb1 != nb2)
		return (nb2);
	std::cout << "both parameters are equal so first parameter is retuned\n";
	return (nb1);
}

Fixed const & Fixed::min(Fixed & nb1, Fixed & nb2)
{
	if (nb1 < nb2)
		return (nb1);
	else if (nb1 != nb2)
		return (nb2);
	std::cout << "both parameters are equal so first parameter is retuned\n";
	return (nb1);
}

Fixed const & Fixed::max(Fixed const & nb1, Fixed const & nb2){
	if (nb1 > nb2)
		return (nb1);
	else if (nb1 != nb2)
		return (nb2);
	std::cout << "both parameters are equal so first parameter is retuned\n";
	return (nb1);
}

Fixed const & Fixed::max(Fixed & nb1, Fixed & nb2){
	if (nb1 > nb2)
		return (nb1);
	else if (nb1 != nb2)
		return (nb2);
	std::cout << "both parameters are equal so first parameter is retuned\n";
	return (nb1);
}

std::ostream & operator<<(std::ostream & o, Fixed const & output){
	o << output.toFloat();
	return (o);
}
