#ifndef BRAIN_HPP
#define BRAIN_HPP

#define SIZE 100
#include <iostream>

class Brain{
	public :
				Brain();
				Brain(std::string const & assignement);
				Brain(Brain const & to_assign);
	Brain 		& operator=(Brain const & to_assign);
				~Brain();

	void		setIdea(std::string const & to_assign, int i);
	std::string	& getIdea(int i);
	private :
		std::string ideas[SIZE];
};

#endif
