#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

	public:
		Animal();
		Animal(Animal const & src);
		virtual ~Animal();

		Animal&	operator=(Animal const & other);

		std::string	getType(void) const;
		void		setType(std::string const & type);

		virtual void	makeSound() const;

	protected:
		std::string type;
};

#endif