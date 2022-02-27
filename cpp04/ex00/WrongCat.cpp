#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	std::cout << "WrongCat default constructor" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & src) {
	std::cout << "WrongCat copy constructor" << std::endl;
	*this = src;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat default destructor" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const & other) {
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	WrongCat::makeSound() const {
	std::cout << "Wrong Meow!" << std::endl;
}