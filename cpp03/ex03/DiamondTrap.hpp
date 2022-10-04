#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	public :
		DiamondTrap();
		DiamondTrap(std::string const & assignement);
		DiamondTrap(DiamondTrap const & cpy);
		DiamondTrap & operator=(DiamondTrap const & to_assign);
		~DiamondTrap();
		void	whoAmI(void);
		using	ScavTrap::attack;
	private :
		std::string	_name;
};

#endif
