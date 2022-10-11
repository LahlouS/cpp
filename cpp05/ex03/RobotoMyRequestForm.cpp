#include "RobotoMyRequestForm.hpp"
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>

#define EXEC_GRADE 45
#define SIGN_GRADE 72

RobotoMyRequestForm::RobotoMyRequestForm() : Form::Form("Roboto", "default", EXEC_GRADE, SIGN_GRADE){
	std::cout << "[RobotoMyRequestForm] Default constructor has been called\n";
}

RobotoMyRequestForm::RobotoMyRequestForm(std::string const & name)
: Form::Form("Roboto", name, EXEC_GRADE, SIGN_GRADE) {
	std::cout << "[RobotoMyRequestForm] Assignement constructor has been called\n";
}

RobotoMyRequestForm::RobotoMyRequestForm(RobotoMyRequestForm const & copy) : Form::Form("Roboto", copy.getTarget(), EXEC_GRADE, SIGN_GRADE){
	std::cout << "[RobotoMyRequestForm] Copy constructor has been called\n";
}

RobotoMyRequestForm::~RobotoMyRequestForm(){
	std::cout << "[RobotoMyRequestForm] Destructor has been called\n";
}

Form &	RobotoMyRequestForm::operator=(Form const & toAssign){
	return (Form::operator=(toAssign));
}

void	RobotoMyRequestForm::doTheJob(Bureaucrat const & executor) const{

	(void) executor;
	srand(time(NULL));
	int test = (rand() % 2);

	std::cout << "**********BRUITS DE PERCEUSES*************\n";
	std::cout << "**********BRUITS DE PERCEUSES*************\n";
	std::cout << "**********BRUITS DE PERCEUSES*************\n";
	std::cout << ". . .\n";

	if (test)
		std::cout << this->getTarget() << " has been robotomised with success\n";
	else
		std::cout << this->getTarget() << "'s robotomisation went wrong\n";
}
