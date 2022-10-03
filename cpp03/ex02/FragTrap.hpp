#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap {
	public :
					FragTrap();
					FragTrap(std::string const & name);
					FragTrap(FragTrap const & cpy);
					~FragTrap();

		void		attack(const std::string& target);
		void		highFivesGuys(void);
	private :
};

#endif
