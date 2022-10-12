#include "Class.hpp"
#include <iostream>
#include <string>

int main(void){
	Base test;
	Base *ptr;
	ptr = test.generate();
	test.identify(ptr);
	test.identify(*ptr);
	delete ptr;


	return (0);
}
