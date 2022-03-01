#include "Cure.hpp"

Cure::Cure(void) {
	// std::cout << "Cure void constructor" << std::endl;
	this->type = "cure";
}

Cure::Cure(Cure const & src) {
	// std::cout << "Cure name constructor" << std::endl;
	*this = src;
}

Cure::~Cure(void) {
	// std::cout << "Cure void destructor" << std::endl;
}

Cure&	Cure::operator=(Cure const & other) {
	if (this != &other)
		return *this;
	return *this;
}

Cure* Cure::clone(void) const {
	Cure *newCure = new Cure();
	return newCure;
}
void	Cure::use(ICharacter& target){
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}