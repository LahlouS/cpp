#include <iostream>
#include <string>
#include "include.hpp"

void	print(int);

void	coding(void);
void	is(void);
void	fun(void);
void	execute(void (*f)());

int main( void ) {
	std::cout << "*******TEST 1*********\n";
	{
	int tab[10] = {0,1,2,3,4,5,6,7,8,9};

	iter(tab, 10, &print);
	std::cout << "\n";
	}

	std::cout << "\n*******TEST 2*********\n";
	{
		void (*functab[3])(void);
		functab[0] = &coding;
		functab[1] = &is;
		functab[2] = &fun;

		iter(functab, 3, &execute);
		std::cout << "\n";
	}
	return 0;
}

void	execute(void (*f)()){
	(*f)();
}

void	print(int val){
	std::cout << val << " ";
}

void	coding(void){
	std::cout << "coding ";
}

void	is(void){
	std::cout << "is ";
}

void	fun(void){
	std::cout << "fun !\n ";
}
