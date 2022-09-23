#include <iostream>
#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string assignation)
{
	Zombie	*pointeurSurHordeDeZombie = new Zombie[n];

	 for (int i = 0;i < n;i++)
	 	pointeurSurHordeDeZombie[i] = Zombie(assignation);//.setname(assignation);
	return (pointeurSurHordeDeZombie);
}
