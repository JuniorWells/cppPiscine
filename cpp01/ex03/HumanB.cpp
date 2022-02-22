#include "HumanB.hpp"

HumanB::HumanB( std::string name ): human(name) {

}

HumanB::~HumanB( void ) {

}

void	HumanB::setWeapon(Weapon &weapon) {
	this->weap = &weapon;
}

void	HumanB::attack( void ) const {
	std::cout << this->human << " attacks with their " << this->weap->getType() << std::endl;
}