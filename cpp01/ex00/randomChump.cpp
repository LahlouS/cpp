#include <iostream>
#include "Zombie.hpp"

void	randomChump(std::string assignation)
{
	Zombie	zombieOnStack(assignation);
	zombieOnStack.announce();
}
