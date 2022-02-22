#include "ScavTrap.hpp"

// DEFAULT

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap constructor called" << std::endl;
	this->setName("");
	this->setHitPoints(HP);
	this->setEnergyPoints(EP);
	this->setAttackDamage(AD);
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "Name ScavTrap constructor called" << std::endl;
	this->setName(name);
	this->setHitPoints(HP);
	this->setEnergyPoints(EP);
	this->setAttackDamage(AD);
}

ScavTrap::ScavTrap(std::string name, int hp, int ep, int ad) {
	std::cout << "Full ScavTrap constructor called" << std::endl;
	this->setName(name);
	this->setHitPoints(hp);
	this->setEnergyPoints(ep);
	this->setAttackDamage(ad);
}

ScavTrap::ScavTrap(ScavTrap const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & other) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other){
		this->_name = other.getName();
		this->_hitPoints = other.getHitPoints();
		this->_energyPoints = other.getEnergyPoints();
		this->_attackDamage = other.getAttackDamage();
	}
	return *this;
}

void	ScavTrap::attack(const std::string & target) {
	std::cout << "ScavTrap " + this->getName() + " attacks " + target + " for " << this->getAttackDamage() << std::endl;
}

void	ScavTrap::guardGate(void) const {
	std::cout << "ScavTrap " << this->_name << " is now in gatekeeper mode." << std::endl;
}