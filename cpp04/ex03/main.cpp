#include <iostream>
#include "Character.hpp"
#include "IceCure.hpp"
#include "MateriaSrc.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	//AMateria* save;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	//save = tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "\n\n";
	(*bob) = (*me);
	bob->use(0, *me);
	bob->use(1, *me);
	std::cout << "\n\n";
	//me->unequip(0);
	//me->unequip(1);
	//me->unequip(1);
	std::cout << "\n\n";





	delete bob;
	delete me;
	delete src;
	//delete tmp;
	//delete save;

	return 0;
}

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	std::cout << "\n\n";
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	std::cout << "\n\n";
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }
