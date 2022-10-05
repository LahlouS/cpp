#ifndef BRAIN_HPP
#define BRAIN_HPP

#define SIZE 100
#include <iostream>

class Brain{
	public :
		Brain();
		Brain(std::string const & assignement);
		Brain(Brain const & to_assign);
	Brain & operator=(Brain const & to_assign);
		~Brain();

	private :
		std::string ideas[SIZE];
};

#endif
