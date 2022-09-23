#include <iostream>
#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string assignation);

int main()
{
	Zombie	*pointeurSurHordeDeZombie = zombieHorde(5, "horde");

	int nbZombie(5);
	std::cout << "\n\n";
	for (int i = 0; i<nbZombie; i++)
		pointeurSurHordeDeZombie[i].announce();
	std::cout << "\n\n";
	delete[] pointeurSurHordeDeZombie;
	return (0);
}
