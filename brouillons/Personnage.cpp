#include "test.hpp"
#include <iostream>
#include <string>


/*  PERSONNAGE CLASS METHODES DEFINITIONS */

Personnage::Personnage(std::string name) : p_vie(100), p_name(name)
{
	std::cout << "Personnage class default constructor has been called\n";
}

void	Personnage::RecevoirCoups(int degats) {
	this->p_vie -= degats;
}

void	Personnage::coupDePoint(Personnage & cible) const {
	cible.RecevoirCoups(10);
}

void	Personnage::print(void) const {
	std::cout << this->p_name << " : " << this->p_vie << "point de vie\n";
}

/*  GUERRIER CLASS METHODES DEFINITIONS */

void	Guerrier::coupDeHache(Personnage & cible)const {
	cible.RecevoirCoups(30);
}


/* MAGICIAN CLASS METHODES DEFINITIONS */

Magicien::Magicien(void) : Personnage("defaultMagician"), p_mana(100) {

}

Magicien::Magicien(std::string name) : Personnage(name), p_mana(100) {
	std::cout << "Default MAGICIAN constructor has been called\n";
}

void	Magicien::bouleDeFeu(Personnage & cible) const{
	cible.RecevoirCoups(30);
}

void	Magicien::bouleDeGlace(Personnage & cible) const{
	cible.RecevoirCoups(30);
}
