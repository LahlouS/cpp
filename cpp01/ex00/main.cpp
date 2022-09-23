#include <iostream>
#include "Zombie.hpp"

Zombie	*newZombie(std::string	assignation);
void	randomChump(std::string assignation);

int main()
{
	/*les lignes 6 et 7 produisent le meme output que la ligne 10,
	a la difference que mon pointeur sur zombie est lui accessible
	dans le main tandis que la foncion randomChump declare une
	instance zombie sur la stack en statique,
	il est donc detruit a la fin dexecution de la fonction;*/
	Zombie	*pointeurSurZombie = newZombie("ZombieOnHeap");
	pointeurSurZombie->announce();

	randomChump("ZombieOnStack");
	/*ici, si je delete pas mon pointeur sur zombie alors j'ai une leaks*/
	delete pointeurSurZombie;
	return (0);
}
