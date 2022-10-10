#include <iostream>
#include <string>
#include "bureaucrat.hpp"

void	programPause(void){
	char backSlashN = 0;
	std::cout << "Press enter to continue\n";
	std::cin.get(backSlashN);
}

int main(){

	programPause();
	{
		Bureaucrat test("Cedric", 53);
		test--;
		std::cout << "(test--) test info : " << test.getGrade() << " is my grade" << std::endl;
		std::cout << "and " << test.getName() << " is my name" << std::endl;

		Bureaucrat testRecopie("Armand", 56);
		--testRecopie;
		std::cout << "(--test) test info2 (Recopie de cedric) : " << testRecopie.getGrade() << " is my grade" << std::endl;
		std::cout << "and " << testRecopie.getName() << " is my name" << std::endl;

		Bureaucrat testOp;

		testOp = testRecopie;
		testOp++;
		std::cout << "test info3 (= overload) : " << testOp.getGrade() << " is my grade" << std::endl;
		std::cout << "and " << testOp.getName() << " is my name" << std::endl;
	}
	std::cout << "\n\n\n\n\n";
	programPause();
	{
		try{
			Bureaucrat test("corinne", 151);
		}
		catch (std::exception const & e){
			std::cout << e.what();
		}
	}
	std::cout << "\n\n\n\n\n";
	programPause();
	{
	try{
		Bureaucrat test("Roland", 0);
	}
	catch (std::exception const & e){
		std::cout << e.what();
	}
	}
	std::cout << "\n\n\n\n\n";
	programPause();
	{
	Bureaucrat test("Severine", 1);
	std::cout << test;
	try{
		test++;
	}
	catch (std::exception const & e){
		std::cout << e.what();
	}
	}
	std::cout << "\n\n\n\n\n";
	programPause();
	{
	Bureaucrat test("Sophie", 150);
	std::cout << test;
	try{
		test--;
	}
	catch (std::exception const & e){
		std::cout << e.what();
	}
	}
	std::cout << "\n\n\n\n\n";
	return (0);
}

