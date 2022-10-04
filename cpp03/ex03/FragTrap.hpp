#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public virtual ClapTrap {
	public :
					FragTrap();
					FragTrap(std::string const & name);
					FragTrap(FragTrap const & cpy);
					~FragTrap();
					FragTrap & operator=(FragTrap const & to_assign);

		void		attack(const std::string& target);
		void		highFivesGuys(void);
	private :
};

#endif
