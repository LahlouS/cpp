#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
class Form;

class RobotoMyRequestForm : public Form{
	public:
		RobotoMyRequestForm();
		RobotoMyRequestForm(std::string const & name);
		RobotoMyRequestForm(RobotoMyRequestForm const & copy);
		Form &	operator=(Form const & toAssign);
		~RobotoMyRequestForm();
	private:
		void	doTheJob(Bureaucrat const & executor) const;

};

#endif
