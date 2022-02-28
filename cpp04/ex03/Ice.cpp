#include "Ice.hpp"

Ice::Ice(void) {
	std::cout << "Ice void constructor" << std::endl;
	this->type = "ice";
}

Ice::Ice(Ice const & src) {
	std::cout << "Ice name constructor" << std::endl;
	*this = src;
}

Ice::~Ice(void) {
	std::cout << "Ice void destructor" << std::endl;
}

Ice&	Ice::operator=(Ice const & other) {
	if (this != &other)
		return *this;
	return *this;
}

AMateria*	Ice::clone(void) const {
	AMateria *newIce = new Ice();
	return newIce;
}

void	Ice::use(ICharacter& target){
	std::cout << this->type + " * shoots an ice bolt at " + target.getName() + " *" << std::endl;
}