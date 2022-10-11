#include "Intern.hpp"
#include <iostream>
#include <string>

Intern::Intern(){
	std::cout << "[Intern] Default constructor has been called\n";
	tab[0] = "Shrubbery";
	tab[1] = "Roboto";
	tab[2] = "Presidential";

}

Intern::Intern(Intern const & cpy){
	std::cout << "[Intern] Copy constructor has been called\n";
	(void)cpy;
	tab[0] = "Shrubbery";
	tab[1] = "Roboto";
	tab[2] = "Presidential";
}

Intern const & Intern::operator=(Intern const & toAssign){
	(void) toAssign;
	std::cout << "[Intern] = overload has been called\n";
	return (*this);
}

Intern::~Intern(){
	std::cout << "[Intern] Destructor has been called\n";
}

Form	*Intern::makeForm(std::string formName, std::string target){
	int i = 0;
	for (; i < 3 && formName.compare(tab[i]); i++);
	switch (i) {
		case 0 :
			std::cout << "Intern created new ShrubberyForm" << "\n";
			return (new ShrubberyCreationForm(target));
		case 1 :
			std::cout << "Intern created new RobotoForm" << "\n";
			return (new RobotoMyRequestForm(target));
		case 2 :
		std::cout << "Intern created new PresidentialPardonForm" << "\n";
			return (new PresidentialPardonForm(target));
		default :
			std::cout << "Unrecognized Form name: " << formName << "\n";
	}
	return (NULL);
}
