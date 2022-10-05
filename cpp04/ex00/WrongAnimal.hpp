#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class Animal{
	public:
		Animal();
		Animal(Animal const & to_assign);
		Animal(std::string const & assignement);
		Animal & operator=(Animal const & to_assign);
		~Animal();

		std::string const & getType(void) const;
		void	makeSound(void) const;
	protected:
		std::string	type;
};

#endif
