#include <iostream>
#include "Zombie.hpp"

Zombie	*newZombie(std::string	assignation){
	Zombie	*pointeurSurZombie = new Zombie(assignation);
	return (pointeurSurZombie);
}
