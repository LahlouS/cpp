#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap {
	public :
					ScavTrap();
					ScavTrap(std::string const & name);
					ScavTrap(ScavTrap const & cpy);
					ScavTrap & operator=(ScavTrap const & to_assign);
					~ScavTrap();

		void		attack(const std::string& target);
		void		guardGate(void);
	private :
};

#endif
