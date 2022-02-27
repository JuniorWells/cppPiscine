#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) {
	std::cout << "WrongAnimal copy constructor" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal default destructor" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const & other) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

std::string	WrongAnimal::getType(void) const{
	return this->type;
}

void	WrongAnimal::setType(std::string const & type){
	this->type = type;
}


void	WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sounds" << std::endl;
}