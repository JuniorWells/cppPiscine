#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ): human(name), weap(weapon) {

}

HumanA::~HumanA( void ) {

}

void	HumanA::attack ( void ) const {
	std::cout << this->human << " attacks with their " << this->weap.getType() << std::endl;
}
