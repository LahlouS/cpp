#include <iostream>
#include "Character.hpp"

Character::Character() : name("Generic Charactere"){
	for (int i = 0; i < NB_ITEMS; i++)
		this->items[i] = NULL;
	std::cout << "[ICharacter] Default constructor has been called\n";
}

Character::Character(std::string const & name) : name(name){
	for (int i = 0; i < NB_ITEMS; i++)
		this->items[i] = NULL;
	std::cout << "[ICharacter] Assignement constructor has been called for \'" << name << "\'\n";
}

Character::Character(ICharacter const & copy){
	(*this) = copy;
}

Character::~Character() {
	std::cout << "[Character] Destructor has been called\n";
	for (int i = 0; i < NB_ITEMS; i++) {
		if (this->items[i])
			delete this->items[i];
	}
}

ICharacter & Character::operator=(ICharacter const & to_assign){
	std::cout << "[Character] = overload called\n";
	this->name = to_assign.getName();
	std::cout << "debug : " << this->name << "\n";
	for (int i = 0; i < NB_ITEMS; i++){
		if (this->items[i]) {
			delete this->items[i];
			this->items[i] = NULL;
		} if (to_assign.getItem(i))
				this->items[i] = to_assign.getItem(i)->clone();
	}
	return (*this);
}

Character & Character::operator=(Character const & to_assign){
	std::cout << "[Character] = overload called\n";
	this->name = to_assign.getName();
	std::cout << "debug : " << this->name << "\n";
	for (int i = 0; i < NB_ITEMS; i++){
		if (this->items[i]) {
			delete this->items[i];
			this->items[i] = NULL;
		} if (to_assign.getItem(i))
				this->items[i] = to_assign.getItem(i)->clone();
	}
	return (*this);
}

std::string const & Character::getName() const {
	return (this->name);
}

AMateria * Character::getItem(int idx) const {
	if (idx >= 0 && idx <= 3) {
		return (this->items[idx]);
	}
	std::cout << "[getItem] Index out of items definition, returning NULL\n";
	return NULL;
}

void Character::equip(AMateria* m) {
	int i = 0;
	for (; i < NB_ITEMS && this->items[i]; i++);
	if (i < NB_ITEMS)
		this->items[i] = m;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < NB_ITEMS){
		this->items[idx] = NULL;
		std::cout << "[unequip] items at index [" << idx << "] has been drop, watch out for not loosing the adress\n";
	} else {
		std::cout << "[unequip] Index out of items definition, items left unchange\n";
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx <= 3){
	if (this->items[idx])
		this->items[idx]->use(target);
	} else {
		std::cout << "[use] Index out of items definition, no use possible\n";
	}
}
