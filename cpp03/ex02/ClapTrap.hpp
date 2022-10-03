#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
	public:
				ClapTrap();
				ClapTrap(std::string const & name);
				ClapTrap &	operator=(ClapTrap const & to_assign);
				ClapTrap(ClapTrap const & cpy);
				~ClapTrap();

		void		attack(const std::string& target);
		void		takeDammage(unsigned int ammount);
		void		beRepaired(unsigned int ammount);
	protected:
		std::string				_name;
		unsigned int			_hitPoint;
		unsigned int			_energyPoints;
		unsigned int			_dammage;

};

#endif

