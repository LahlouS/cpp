#include <iostream>
#include "Class.hpp"


Base::~Base(){
	std::cout << "[BASE] Destructor has been called\n";
}

A::~A(){
	std::cout << "[A] Destructor has been called\n";
}

C::~C(){
	std::cout << "[C] Destructor has been called\n";
}

B::~B(){
	std::cout << "[B] Destructor has been called\n";
}

Base * Base::generate(void){
	srand(time(NULL));
	int randNb = (rand() % 3) + 1;
	switch (randNb) {
		case 1 :
			std::cout << "NEW A \n";
			return (new A());
		case 2 :
			std::cout << "NEW B \n";
			return (new B());
		case 3 :
			std::cout << "NEW C \n";
			return (new C());
		default :
			break ;
	}
	return (NULL);
}

void	Base::identify(Base* p){
	if (dynamic_cast<A*>(p)) {
		std::cout << "A\n";
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B\n";
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C\n";
	}
}


void	Base::identify(Base& p){
	try {
		(void) dynamic_cast<A&>(p);
		std::cout << "A&\n";
	}
	catch (std::exception &bc){
		(void)bc;
	}
	try {
		(void) dynamic_cast<B&>(p);
		std::cout << "B&\n";
	}
	catch (std::exception &bc){
		(void)bc;
	}
		try {
		(void) dynamic_cast<C&>(p);
		std::cout << "C&\n";
	}
	catch (std::exception &bc){
		(void)bc;
	}


}

