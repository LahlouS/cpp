#include "Erreur.hpp"
#include <string>
#include <iostream>
#include <string>


Erreur::Erreur(int numero, std::string const & phrase, int niveau) throw()
: m_numero(numero), m_phrase(phrase), m_niveau(niveau) {
	std::cout << "[Erreur] Constructor has been called\n";
}

const char* Erreur::what() const throw()
{
	return m_phrase.c_str();
}

int Erreur::getNiveau() const throw()
{
	return m_niveau;
}
