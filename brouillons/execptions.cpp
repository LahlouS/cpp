/*exemple d'un jete dexeption classique avec un fonction de division*/

#include <iostream>

int	division(int a, int b){
	if (!b)
		throw std::string("Les divisions par 0 ne sont pas une operation arithmetique valides !");
	return (a / b);
}

int main(){

	int a = 12, b = 0, result;

	try{
		result = division(a, b);
	}
	catch(std::string const & Erreur){
		std::cout << Erreur << "\n";
	}
}
