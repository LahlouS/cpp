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

// int main(){

// 	try{
// 		PresidentialPardonForm form("cerfa08");
// 		std::cout << form;
// 		Bureaucrat B("sacha", 12);
// 		Bureaucrat C("luc", 1);
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
	programPause();
	{
	PresidentialPardonForm testPresident = PresidentialPardonForm("Jack");
	try{
		Bureaucrat B("didier", 1);
		try {
			B.signForm(testPresident);
			B.executeForm(testPresident);
		}
		catch (std::exception const & e){
			std::cout << e.what();
		}
	}
	catch (std::exception const & e){
		std::cout << e.what();
	}
	}
	programPause();
	{
	ShrubberyCreationForm test = ShrubberyCreationForm("target1");
	RobotoMyRequestForm	testRoboto = RobotoMyRequestForm("Eric");


		try{
			Bureaucrat sacha("sacha", 1);
			try {
				// sacha.signForm(test);
				// sacha.executeForm(test);
				sacha.signForm(testRoboto);
				sacha.executeForm(testRoboto);
			}
		catch (std::exception const & e){
			std::cout << e.what();
		}
	}
	catch (std::exception const & e){
		std::cout << e.what();
	}

	}
	return (0);
}

// int main(void){
// {
// 	Intern someRandomIntern;
// 	Form* rrf;
// 	rrf = someRandomIntern.makeForm("Roboto", "Bender");
// 	delete rrf;
// }
// return (0);
// }


// int main()
// {
//     try
//     {
//         Intern  intern;
//         Form    *rrf;
//         Bureaucrat  max("sach", 1);

//         rrf = intern.makeForm("Presidential", "tintin");
//         if (rrf)
//         {
//             max.signForm(*rrf);
//             max.executeForm(*rrf);
//             delete rrf;
//         }
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     try
//     {
//         Intern  intern;
//         Form    *rrf;
//         Bureaucrat  max("sach", 1);

//         rrf = intern.makeForm("Shrubbery", "tintin");
//         if (rrf)
//         {
//             max.signForm(*rrf);
//             max.executeForm(*rrf);
//             delete rrf;
//         }
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     return (0);
// }
