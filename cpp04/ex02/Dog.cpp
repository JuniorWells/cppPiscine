#include "Dog.hpp"

Dog::Dog(void) {
	//std::cout << "Dog default constructor" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const & src) {
	std::cout << "Dog copy constructor" << std::endl;
	*this = src;
}

Dog::~Dog(void) {
	//std::cout << "Dog default destructor" << std::endl;
	delete this->_brain;
}

Dog&	Dog::operator=(Dog const & other) {
	if (this != &other){
		this->type = other.type;
		this->_brain = other._brain;
	}
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}