#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal {
	public :
					Cat();
					Cat(std::string const & assignement);
					Cat(Cat const & to_assign);
		Animal & 	operator=(Animal const & to_assign);
					~Cat();

		void		makeSound(void) const;
		void		setIdea(std::string to_assign, int i);
		std::string	& getIdea(int i);
	private :
		Brain *brain;
};

#endif
