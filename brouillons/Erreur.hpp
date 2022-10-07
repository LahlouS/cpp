#ifndef Erreur_HPP
#define Erreur_HPP

#include <exception>
#include <string>

class Erreur: public std::exception
{
public:
	Erreur(int numero, std::string const& phrase, int niveau) throw();
	virtual const char* what() const throw();
	int getNiveau() const throw();


private:
    int m_numero;               //Numéro de l'erreur
    std::string m_phrase;            //Description de l'erreur
    int m_niveau;               //Niveau de l'erreur
};

#endif
