#include "Animal.hpp"

AAnimal::AAnimal(void) {
	//std::cout << "AAnimal default constructor" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src) {
	std::cout << "AAnimal copy constructor" << std::endl;
	*this = src;
}

AAnimal::~AAnimal(void) {
	//std::cout << "AAnimal default destructor" << std::endl;
}

AAnimal&	AAnimal::operator=(AAnimal const & other) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

std::string	AAnimal::getType(void) const{
	return this->type;
}

void	AAnimal::setType(std::string const & type){
	this->type = type;
}

void	AAnimal::makeSound() const {
	std::cout << "AAnimal sounds" << std::endl;
}