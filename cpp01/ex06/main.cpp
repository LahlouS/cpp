#include <iostream>
#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl isComplaining;
	if (ac == 2)
	{
		isComplaining.complain(*(av + 1));
	}
	return (0);
}
