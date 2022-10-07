#include <iostream>
#include "Harl.hpp"

void	Harl::debug(void){
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !\n" << std::endl;
}

void	Harl::info(void){
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !\n" << std::endl;
}

void	Harl::warning(void){
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::Erreur(void){
	std::cout << "[Erreur]\nThis is unacceptable ! I want to speak to the manager now.\n" << std::endl;
}

Harl::Harl()
{
	opt[0] = "DEBUG";
	opt[1] = "INFO";
	opt[2] = "WARNING";
	opt[3] = "Erreur";
	message[0] = &Harl::debug;
	message[1] = &Harl::info;
	message[2] = &Harl::warning;
	message[3] = &Harl::Erreur;
}

Harl::~Harl(){
	return ;
}

void	Harl::complain(std::string level){
	int i = 0;
	for (; opt[i].compare(level) && i < 4; i++);
	switch(i)
	{
		case 0 :
			(this->*message[0])();
		case 1 :
			(this->*message[1])();
		case 2 :
			(this->*message[2])();
		case 3 :
			(this->*message[3])();
			break ;
		default :
			std::cout << "[probably complaining about insignificant problem]\n";
	}
}
