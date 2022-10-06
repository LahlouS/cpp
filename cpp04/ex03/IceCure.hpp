#ifndef ICECURE_HPP
#define ICECURE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
	public :
							Ice();
							Ice(std::string const & type);
							Ice(AMateria const & copy);
							~Ice();
		AMateria			& operator=(AMateria const & toAssign);

		AMateria			* clone() const;
		void				use(ICharacter & target);
	private :
};

class Cure : public AMateria{
	public:
							Cure();
							Cure(std::string const & type);
							Cure(AMateria const & copy);
							~Cure();
		AMateria			& operator=(AMateria const & toAssign);

		AMateria			* clone() const;
		void				use(ICharacter & target);

	private :
};

#endif
