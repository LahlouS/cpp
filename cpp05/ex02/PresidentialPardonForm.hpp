#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
class Form;

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const & name);
		PresidentialPardonForm(PresidentialPardonForm const & copy);
		Form &	operator=(Form const & toAssign);
		~PresidentialPardonForm();
	private:
		void	doTheJob(Bureaucrat const & executor) const;

};

#endif
