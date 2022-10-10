#include <iostream>
#include <string>
#include "Form.hpp"
#include "bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotoMyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	programPause(void){
	char backSlashN = 0;
	std::cout << "Press enter to continue\n";
	std::cin.get(backSlashN);
}

// int main(){

// 	try{
// 		Form form("cerfa08", 91, 91);
// 		std::cout << form;
// 		Bureaucrat B("sacha", 90);
// 		Bureaucrat C("luc", 92);
// 		std::cout << B;
// 		std::cout << "\n\n\n";
// 		B.signForm(form);
// 		std::cout << "\n\n\n";
// 		C.signForm(form);
// 		std::cout << form;
// 	}
// 	catch(std::exception const & e){
// 		std::cout << e.what();
// 	}
// 	return (0);
// }

int main(){
	ShrubberyCreationForm test = ShrubberyCreationForm("Shrubberyfffffff");
	RobotoMyRequestForm	testRoboto = RobotoMyRequestForm("CerfaRobot");
	PresidentialPardonForm testPresident = PresidentialPardonForm("CERFAPRESIDENTIAL");
	Bureaucrat B("didier", 1);

	// std::cout << test << std::endl;
	 std::cout << "\n\n";
	// std::cout << B;
	// std::cout << "\n\n";
	// test.execute(B);
	// std::cout << "\n\n";
	// testRoboto.execute(B);
	testPresident.execute(B);
	return (0);
}
