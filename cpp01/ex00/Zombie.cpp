#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string assignation) : name(assignation){
	std::cout << "Constructor has been called for [" << name << "]\n";
}

Zombie::~Zombie()
{
	std::cout << name << ": has been destroyed\n";
}

void	Zombie::announce(void) const{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
