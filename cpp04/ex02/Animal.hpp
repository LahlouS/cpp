#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
	public:
		Animal();
		Animal(Animal const & to_assign);
		Animal(std::string const & assignement);
		virtual Animal & operator=(Animal const & to_assign);
		virtual ~Animal();

		std::string const & getType(void) const;
		virtual void	makeSound(void) const = 0;
	protected:
		std::string	type;
};

#endif
