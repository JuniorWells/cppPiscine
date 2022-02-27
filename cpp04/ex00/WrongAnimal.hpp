#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const & src);
		~WrongAnimal();

		WrongAnimal&	operator=(WrongAnimal const & other);

		std::string	getType(void) const;
		void		setType(std::string const & type);

		void	makeSound() const;

	protected:
		std::string type;
};

#endif