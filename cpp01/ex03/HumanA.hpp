#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string assignation, Weapon& first_weapon);
		~HumanA();
		void	attack(void) const;
	private:
		std::string name;
		Weapon &weapon;
};

#endif
