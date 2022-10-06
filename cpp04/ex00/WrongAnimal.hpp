#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const & to_assign);
		WrongAnimal(std::string const & assignement);
		WrongAnimal & operator=(WrongAnimal const & to_assign);
		~WrongAnimal();

		std::string const & getType(void) const;
		void	makeSound(void) const;
	protected:
		std::string	type;
};

#endif
