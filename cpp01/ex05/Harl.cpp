#include <iostream>
#include "Harl.hpp"

void	Harl::debug(void){
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void	Harl::info(void){
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}

void	Harl::warning(void){
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void){
	std::cout << "[ERROR] This is unacceptable ! I want to speak to the manager now." << std::endl;
}

Harl::Harl(){
	opt[0] = "DEBUG";
	opt[1] = "INFO";
	opt[2] = "WARNING";
	opt[3] = "ERROR";
	message[0] = &Harl::debug;
	message[1] = &Harl::info;
	message[2] = &Harl::warning;
	message[3] = &Harl::error;
}

Harl::~Harl(){
	return ;
}

void	Harl::complain(std::string level){
	int i = 0;
	for (; opt[i].compare(level) && i < 4; i++);
	(this->*message[i])();
}
