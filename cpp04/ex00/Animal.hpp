#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
	public:
		Animal();
		Animal(Animal const & to_assign);
		Animal(std::string const & assignement);
		Animal & operator=(Animal const & to_assign);
		~Animal();

		virtual void	makeSound(void);
	protected:
		std::string	type;
};

#endif
