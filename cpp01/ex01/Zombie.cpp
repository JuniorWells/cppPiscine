#include "Zombie.hpp"

void	Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie ( void ){

}

Zombie::Zombie ( std::string name ): _name( name ) {

}

Zombie::~Zombie () {
	std::cout << this->_name << " is dead baby" << std::endl;
}

void	Zombie::setName( std::string name ) {
	this->_name = name;
}