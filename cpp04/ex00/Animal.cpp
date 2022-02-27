#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(Animal const & src) {
	std::cout << "Animal copy constructor" << std::endl;
	*this = src;
}

Animal::~Animal(void) {
	std::cout << "Animal default destructor" << std::endl;
}

Animal&	Animal::operator=(Animal const & other) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

std::string	Animal::getType(void) const{
	return this->type;
}

void	Animal::setType(std::string const & type){
	this->type = type;
}

void	Animal::makeSound() const {
	std::cout << "Animal sounds" << std::endl;
}