#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal {

	public:
		AAnimal();
		AAnimal(AAnimal const & src);
		virtual ~AAnimal();

		AAnimal&	operator=(AAnimal const & other);

		std::string	getType(void) const;
		void		setType(std::string const & type);

		virtual void	makeSound() const = 0;

	protected:
		std::string type;
};

#endif