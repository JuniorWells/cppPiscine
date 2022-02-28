#include "Cat.hpp"

Cat::Cat(void) {
	//std::cout << "Cat default constructor" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const & src) {
	std::cout << "Cat copy constructor" << std::endl;
	*this = src;
}

Cat::~Cat(void) {
	//std::cout << "Cat default destructor" << std::endl;
	delete this->_brain;
}

Cat&	Cat::operator=(Cat const & other) {
	if (this != &other){
		this->type = other.type;
		*(this->_brain) = *(other._brain);
	}
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}