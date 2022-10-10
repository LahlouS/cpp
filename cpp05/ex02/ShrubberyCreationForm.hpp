#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const & name);
		ShrubberyCreationForm(ShrubberyCreationForm const & copy);
		Form &	operator=(Form const & toAssign);
		~ShrubberyCreationForm();
	private:
		void		doTheJob(Bureaucrat const & executor) const;

};

#endif
