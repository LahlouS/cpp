#ifndef WRONGWrongCat_HPP
#define WRONGWrongCat_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal {
	public :
		WrongCat();
		WrongCat(std::string const & assignement);
		WrongCat(WrongCat const & to_assign);
	WrongCat & operator=(WrongCat const & to_assign);
		~WrongCat();

	void	makeSound(void) const;
	private :
};

#endif
