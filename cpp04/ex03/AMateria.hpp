#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "Character.hpp"

class ICharacter;

class	AMateria{
	public:
					AMateria();
					AMateria(std::string const & type);
					AMateria(AMateria const & copy);
	virtual			~AMateria();
	virtual	AMateria& operator=(AMateria const & toAssign);

	std::string	const & getType(void) const;
	virtual AMateria	* clone()const = 0;
	virtual void		use(ICharacter & target) = 0;

	protected:
		std::string	type;
};

#endif
