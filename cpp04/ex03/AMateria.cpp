#include "AMateria.hpp"

AMateria::AMateria(void) {
	// std::cout << "AMateria void constructor" << std::endl;
}

AMateria::AMateria(std::string const & type) {
	// std::cout << "AMateria type constructor" << std::endl;
	this->type = type;
}

AMateria::~AMateria(void) {
	// std::cout << "AMateria destructor" << std::endl;
}

std::string const & AMateria::getType() const {
	return this->type;
}

// AMateria*	AMateria::clone(void) const {

// }

void	AMateria::use(ICharacter& target){
	(void)target;
}