#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	
	public:
		Character();
		Character(std::string const & name);
		Character(Character const & src);
		~Character();

		Character& operator=(Character const & other);

		std::string const &	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);

		AMateria*	getInv( void ) const;

	private:
		std::string		_name;
		AMateria*		_inv[4];
};

#endif