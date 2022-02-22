#include "Weapon.hpp"

Weapon::Weapon( std::string name ) {
	this->setType(name);
}

Weapon::~Weapon( void ) {

}

std::string const &	Weapon::getType( void ) const {
	std::string const & ref = this->_type;
	return ref;
}

void	Weapon::setType( std::string type ) {
	this->_type = type;
}