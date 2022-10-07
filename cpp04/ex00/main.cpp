#include <iostream>
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "\n\n";
	std::cout << j->getType() << " "; j->makeSound();
	std::cout << i->getType() << " "; i->makeSound();//will output the cat sound!
	std::cout << meta->getType() << " "; meta->makeSound();
	std::cout << "\n\n";
	delete meta; // should not produce any leaks
	delete j;
	delete i;
return 0;
}
