#ifndef MATERIASRC_HPP
#define MATERIASRC_HPP

#include "AMateria.hpp"

class IMateriaSource
{
	public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria* materia) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource {
	public :
		MateriaSource();
		MateriaSource(MateriaSource const & copy);
		MateriaSource & operator=(MateriaSource const & toAssign);
		~MateriaSource();

		void 		learnMateria(AMateria* materia);
		AMateria*	createMateria(std::string const & type);
	private :
		Character store;
};

#endif
