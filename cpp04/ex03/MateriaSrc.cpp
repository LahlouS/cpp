#include <iostream>
#include "MateriaSrc.hpp"

#define SIZE 4

MateriaSource::MateriaSource(){
	std::cout << "[MateriaSource] Default constructor has been called\n";
}

MateriaSource::MateriaSource(MateriaSource const & copy){
	*this = copy;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & toAssign) {
	this->store = toAssign.store;
	return (*this);
}

MateriaSource::~MateriaSource(){
	std::cout << "[MateriaSource] Destructor has been called\n";
}

void	MateriaSource::learnMateria(AMateria* materia){
	for (int i = 0; i < SIZE; i++)
		if (this->store.getItem(i) && this->store.getItem(i) == materia)
			return ;
	this->store.equip(materia);
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type){
	int i = 0;
	for (; i < SIZE && this->store.getItem(i)->getType().compare(type); i++);
	if (i < SIZE)
		return (this->store.getItem(i)->clone());
	std::cout << "[createMateria] no pattern found, return NULL\n";
	return (NULL);
}
