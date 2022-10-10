
#include <iostream>
#include <string>
#include "PresidentialPardonForm.hpp"

#define EXEC_GRADE 5
#define SIGN_GRADE 25

PresidentialPardonForm::PresidentialPardonForm() : Form::Form("Roboto", EXEC_GRADE, SIGN_GRADE){
	std::cout << "[PresidentialPardonForm] Default constructor has been called\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & name)
: Form::Form(name, EXEC_GRADE, SIGN_GRADE) {
	std::cout << "[PresidentialPardonForm] Assignement constructor has been called\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy) : Form::Form(copy.getName(), EXEC_GRADE, SIGN_GRADE){
	std::cout << "[PresidentialPardonForm] Copy constructor has been called\n";
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "[PresidentialPardonForm] Destructor has been called\n";
}

Form &	PresidentialPardonForm::operator=(Form const & toAssign){
	return (Form::operator=(toAssign));
}

void	PresidentialPardonForm::doTheJob(Bureaucrat const & executor) const{
	std::cout << "[IN PresidentialPardonForm]\n";
	std::cout << executor << "\nis about to exec " << *this << std::endl;
}
