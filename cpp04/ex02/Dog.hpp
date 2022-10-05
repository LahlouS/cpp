#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public :
					Dog();
					Dog(std::string const & assignement);
					Dog(Dog const & to_assign);
		Dog 		& operator=(Dog const & to_assign);
					~Dog();

		void		makeSound(void) const;
		void		setIdea(std::string to_assign, int i);
		std::string	& getIdea(int i);

	private :
		Brain	*brain;
};

#endif
