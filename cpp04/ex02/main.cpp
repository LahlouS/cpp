#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

#define TAB_SIZE 5

int main(){
	int i;
	Animal *animal[TAB_SIZE];
	std::cout << "********PROGRAM START*********\n\n";
	for (i = 0; i < TAB_SIZE; i++)
	{
		if (i < TAB_SIZE / 2)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
		for (int e = 0; e < 25; e++)
		{
			if (!((*animal[i]).getType().compare("dog")))
				((Dog *) animal[i])->setIdea("I'm a silly dog!\n", i);
			else if (!((*animal[i]).getType().compare("cat")))
				((Cat *) animal[i])->setIdea("I'm a horny cat!\n", i);
		}
	}
	std::cout << "\n\n";
	for (i = 0; i < TAB_SIZE; i++)
	{
		(*animal[i]).makeSound();
		std::cout << "IDEA: " << ((Cat *) animal[i])->getIdea(i) << std::endl;

	}
	std::cout << "\n\n";
	for (i = 0; i < TAB_SIZE; i++)
		delete animal[i];

	std::cout << "\n\n********PROGRAM END*********\n\n";
	return 0;
}

// int main(){
// 	Animal* j = new Cat();
// 	Animal* i = new Cat();

// 	std::cout << "\n\n";
// 	j->makeSound();
// 	std::cout << " Je suis un " << j->getType() << "\n";
// 	i->makeSound();
// 	std::cout << " Je suis un " << i->getType() << "\n";
// 	std::cout << "\n\n";

// 	//*j = *i;

// 	((Cat *) j)->setIdea("I'm a silly dog!\n", 0);
// 	((Cat *) j)->setIdea("I'm a horny cat!\n", 1);
// 	((Cat *) i)->setIdea("BLURRRRRRRRR\n", 0);
// 	((Cat *) i)->setIdea("SNURRRRRRRRR\n", 1);
// 	std::cout << "IDEA 1: " << ((Cat *) j)->getIdea(0) << std::endl;
// 	std::cout << "IDEA 2: " << ((Cat *) j)->getIdea(1) << std::endl;
// 	std::cout << "IDEA 1: " << ((Cat *) i)->getIdea(0) << std::endl;
// 	std::cout << "IDEA 2: " << ((Cat *) i)->getIdea(1) << std::endl;
// 	*i = *j;
// 	std::cout << "\n\n";
// 	std::cout << "IDEA 1: " << ((Cat *) i)->getIdea(0) << std::endl;
// 	std::cout << "IDEA 2: " << ((Cat *) i)->getIdea(1) << std::endl;

// 	delete j;//should not create a leak
// 	delete i;
// 	return 0;
//}

// int main(){
// 	Animal A;
// }
