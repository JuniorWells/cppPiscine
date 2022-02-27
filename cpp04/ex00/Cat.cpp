#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Cat default constructor" << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat const & src) {
	std::cout << "Cat copy constructor" << std::endl;
	*this = src;
}

Cat::~Cat(void) {
	std::cout << "Cat default destructor" << std::endl;
}

Cat&	Cat::operator=(Cat const & other) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}