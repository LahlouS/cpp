#include <iostream>
#include <string>
#include "Form.hpp"
#include "bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotoMyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void	programPause(void){
	char backSlashN = 0;
	std::cout << "Press enter to continue\n";
	std::cin.get(backSlashN);
}

int main(){

	try{
		PresidentialPardonForm form("cerfa08");
		std::cout << form;
		Bureaucrat B("sacha", 12);
		Bureaucrat C("luc", 1);
		std::cout << B;
		std::cout << "\n\n\n";
		B.signForm(form);
		std::cout << "\n\n\n";
		C.signForm(form);
		std::cout << form;
	}
	catch(std::exception const & e){
		std::cout << e.what();
	}
	return (0);
}

// int main(){
// 	//ShrubberyCreationForm test = ShrubberyCreationForm("Shrubberyfffffff");
// 	//RobotoMyRequestForm	testRoboto = RobotoMyRequestForm("Eric");
// 	PresidentialPardonForm testPresident = PresidentialPardonForm("Jack");
// 	Bureaucrat B("didier", 20);

// 	// std::cout << test << std::endl;
// 	 std::cout << "\n\n";
// 	// std::cout << B;
// 	// std::cout << "\n\n";
// 	try {
// 		B.signForm(testPresident);
// 		B.executeForm(testPresident);
// 	}
// 	catch (std::exception const & e){
// 		std::cout << e.what();
// 	}

// 	// std::cout << "\n\n";
// 	//testRoboto.execute(B);
// 	//testPresident.execute(B);
// 	return (0);
// }

// int main(void){
// {
// 	Intern someRandomIntern;
// 	Form* rrf;
// 	rrf = someRandomIntern.makeForm("Roboto", "Bender");
// 	delete rrf;
// }
// return (0);
// }
