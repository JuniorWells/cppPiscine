#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
	
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & src);
		~MateriaSource();

		MateriaSource&	operator=(MateriaSource const & other);

		std::string		getMateriaType(void) const;
		void			setMateriaType(std::string const & type);

		AMateria*		createMateria(std::string const & type);
		void			learnMateria(AMateria* mat);

	private:
		AMateria*	_mater[4];
		std::string	_type;
};

#endif