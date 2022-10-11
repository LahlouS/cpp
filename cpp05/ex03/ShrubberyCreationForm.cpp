#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <string>

#define EXEC_GRADE 137
#define SIGN_GRADE 145

ShrubberyCreationForm::ShrubberyCreationForm() : Form::Form("Shrubbery", "default", EXEC_GRADE, SIGN_GRADE){
	std::cout << "[ShrubberyCreationForm] Default constructor has been called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & name)
: Form::Form("Shrubbery", name, EXEC_GRADE, SIGN_GRADE) {
	std::cout << "[ShrubberyCreationForm] Assignement constructor has been called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy) : Form::Form("Shrubbery", copy.getTarget(), EXEC_GRADE, SIGN_GRADE){
	std::cout << "[ShrubberyCreationForm] Copy constructor has been called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "[ShrubberyCreationForm] Destructor has been called\n";
}

Form &	ShrubberyCreationForm::operator=(Form const & toAssign){
	return (Form::operator=(toAssign));
}

void	ShrubberyCreationForm::doTheJob(Bureaucrat const & executor) const{
	(void) executor;
	std::string filename(this->getTarget());
	std::ofstream	outfile((filename.append("_shrubbery")).c_str());
	if (outfile)
	{
		outfile << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
		outfile << "\t\t\t\t           \"  \"   \"  \"                                  " << "\n";
		outfile << "\t\t\t\t   ^     (     \"    \"   )                      ^            " << "\n";
		outfile << "\t\t\t\t    ^   (                )                ^                  " << "\n";
		outfile << "\t\t\t\t       (        \"    \"    )          ^        ^                " << "\n";
		outfile << "\t\t\t\t        (                )                         ^         " << "\n";
		outfile << "\t\t\t\t         (  \\  ||  //   )                 ^                 " << "\n";
		outfile << "\t\t\t\t          (  \\ || //   )                                  " << "\n";
		outfile << "\t\t\t\t              |  |                                     " << "\n";
		outfile << "\t\t\t\t              |  |             0                       " << "\n";
		outfile << "\t\t\t\t   0    0     |  |             |                        " << "\n";
		outfile << "\t\t\t\t   |    |     |  |             |   (0)                   " << "\n";
		outfile << "\t\t\t\t   |    |     |  |             |    |                   " << "\n";
		outfile << "\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n";
   		outfile.close();
	}
	else
		throw Form::ExecError();
}
