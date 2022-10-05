#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
	public:
		Animal();
		Animal(Animal const & to_assign);
		Animal(std::string const & assignement);
		Animal & operator=(Animal const & to_assign);
		virtual ~Animal();

		std::string const & getType(void) const;
		virtual void	makeSound(void) const;
	protected:
		std::string	type;
};

#endif
