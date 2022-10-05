#ifndef CAT_HPP
#define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"
#include <iostream>

class Cat : public Animal {
	public :
		Cat();
		Cat(std::string const & assignement);
		Cat(Cat const & to_assign);
	Cat & operator=(Cat const & to_assign);
		~Cat();

	void	makeSound(void) const;
	private :
		Brain *brain;
};

#endif
