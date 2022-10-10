#include "RobotoMyRequestForm.hpp"
#include <iostream>
#include <string>

#define EXEC_GRADE 45
#define SIGN_GRADE 72

RobotoMyRequestForm::RobotoMyRequestForm() : Form::Form("Roboto", EXEC_GRADE, SIGN_GRADE){
	std::cout << "[RobotoMyRequestForm] Default constructor has been called\n";
}

RobotoMyRequestForm::RobotoMyRequestForm(std::string const & name)
: Form::Form(name, EXEC_GRADE, SIGN_GRADE) {
	std::cout << "[RobotoMyRequestForm] Assignement constructor has been called\n";
}

RobotoMyRequestForm::RobotoMyRequestForm(RobotoMyRequestForm const & copy) : Form::Form(copy.getName(), EXEC_GRADE, SIGN_GRADE){
	std::cout << "[RobotoMyRequestForm] Copy constructor has been called\n";
}

RobotoMyRequestForm::~RobotoMyRequestForm(){
	std::cout << "[RobotoMyRequestForm] Destructor has been called\n";
}

Form &	RobotoMyRequestForm::operator=(Form const & toAssign){
	return (Form::operator=(toAssign));
}

void	RobotoMyRequestForm::doTheJob(Bureaucrat const & executor) const{
	std::cout << "[IN ROBOTOMYREQUEST]\n";
	std::cout << executor << "\nis about to exec " << *this << std::endl;
}
