#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Dog default constructor" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const & src) {
	std::cout << "Dog copy constructor" << std::endl;
	*this = src;
}

Dog::~Dog(void) {
	std::cout << "Dog default destructor" << std::endl;
}

Dog&	Dog::operator=(Dog const & other) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}