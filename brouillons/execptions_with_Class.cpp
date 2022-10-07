#include <iostream>
#include <string>
#include "Erreur.hpp"

int division(int a, int b){
	if (!b)
		throw Erreur(1, "ton niveau de math laisse a desirer jeune homme\n", 1);
	return (a / b);
}

int main(void){
	int a = 5, b = 0;

	try{
		std::cout << "division de a par b = " << division(a, b) << "\n";
	}
	catch(std::exception const & Erreur) {
		std::cout << Erreur.what() << "\n";// << Erreur.getLevelstr() << std::endl;
	}
	return (0);
}
