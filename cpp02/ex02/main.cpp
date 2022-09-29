#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a(1);// = Fixed(33.55789521f);
	Fixed const b( Fixed(12.1f) * Fixed(2) );
	a = a + a + a + a;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << --a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "max = " << Fixed::max( a, b ) << std::endl;
	std::cout << "min = " << Fixed::min( a, b ) << std::endl;

return 0;
}
