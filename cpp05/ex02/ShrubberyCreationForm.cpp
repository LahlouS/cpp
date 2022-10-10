#include <iostream>
#include "ShrubberyCreationForm.hpp"

#define EXEC_GRADE 137
#define SIGN_GRADE 145

ShrubberyCreationForm::ShrubberyCreationForm() : Form::Form("Shrubbery", EXEC_GRADE, SIGN_GRADE){
	std::cout << "[ShrubberyCreationForm] Default constructor has been called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & name)
: Form::Form(name, EXEC_GRADE, SIGN_GRADE) {
	std::cout << "[ShrubberyCreationForm] Assignement constructor has been called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy) : Form::Form(copy.getName(), EXEC_GRADE, SIGN_GRADE){
	std::cout << "[ShrubberyCreationForm] Copy constructor has been called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "[ShrubberyCreationForm] Destructor has been called\n";
}

Form &	ShrubberyCreationForm::operator=(Form const & toAssign){
	return (Form::operator=(toAssign));
}

void	ShrubberyCreationForm::doTheJob(Bureaucrat const & executor) const{
	std::cout << executor << "\nis about to exec " << *this << std::endl;
}
