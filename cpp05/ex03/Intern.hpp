#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotoMyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
class Form;
class PresidentialPardonForm;
class RobotoMyRequestForm;
class ShrubberyCreationForm;


class Intern{
	public :
		Intern();
		Intern(Intern const & cpy);
		Intern const & operator=(Intern const & toAssign);
		~Intern();
		Form	*makeForm(std::string formName, std::string target);
	private :
		std::string tab[3];
};

#endif
