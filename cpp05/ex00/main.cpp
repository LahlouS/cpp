#include <iostream>
#include <string>
#include "bureaucrat.hpp"

int main(){
	Bureaucrat test("Cedric", 53);
	test++;
	std::cout << "(test++) test info : " << test.getGrade() << " is my grade" << std::endl;
	std::cout << "and " << test.getName() << " is my name" << std::endl;

	Bureaucrat testRecopie("Armand", 56);
	++testRecopie;
	std::cout << "(++test) test info2 (Recopie de cedric) : " << testRecopie.getGrade() << " is my grade" << std::endl;
	std::cout << "and " << testRecopie.getName() << " is my name" << std::endl;
/*
	Bureaucrat testOp;

	testOp = testRecopie;
	//testOp++;
	std::cout << "test info3 (= overload) : " << testOp.getGrade() << " is my grade" << std::endl;
	std::cout << "and " << testOp.getName() << " is my name" << std::endl;
*/
	return (0);
}

