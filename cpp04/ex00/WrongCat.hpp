#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public:
		WrongCat();
		WrongCat(WrongCat const & src);
		~WrongCat();

		WrongCat&	operator=(WrongCat const & other);

		void	makeSound() const;

};

#endif