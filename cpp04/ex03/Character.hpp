#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

#define NB_ITEMS 4

class AMateria;
class Character;

class ICharacter{
	public :
		virtual ~ICharacter() {}
		virtual ICharacter & operator=(ICharacter const & to_assign) = 0;
		virtual Character & operator=(Character const & to_assign) = 0;
		virtual std::string const & getName() const = 0;
		virtual	AMateria * getItem(int idx) const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter {
	public :
		Character();
		Character(std::string const & name);
		Character(ICharacter const & copy);
		~Character();
	ICharacter & operator=(ICharacter const & to_assign);
	Character & operator=(Character const & to_assign);

	std::string const & getName() const;
	AMateria * getItem(int idx) const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	private :
		std::string name;
		AMateria *items[4];
};

#endif
