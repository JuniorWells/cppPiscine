#include "ScavTrap.hpp"

// DEFAULT

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap constructor called" << std::endl;
	this->setName("");
	this->setHitPoints(MAX_HP);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "Name ScavTrap constructor called" << std::endl;
	this->setName(name);
	this->setHitPoints(MAX_HP);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
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
		this->setName(other.getName());
		this->setHitPoints(other.getHitPoints());
		this->setEnergyPoints(other.getEnergyPoints());
		this->setAttackDamage(other.getAttackDamage());
	}
	return *this;
}

void	ScavTrap::attack(const std::string & target) {
	if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0){
		std::cout << "ScavTrap " + this->getName() + " attacks " + target + ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	} else {
		if (this->getHitPoints() <= 0)
			std::cout << this->getName() << " does not have enough HP to perform any kind of action." << std::endl;
		else
			std::cout << this->getName() << " does not have enough energy to perform any kind of action." << std::endl;
	}
}

void	ScavTrap::guardGate(void) const {
	if (this->getHitPoints() > 0)
		std::cout << this->getName() << " is now in gatekeeper mode." << std::endl;
	else
		std::cout << this->getName() + " is dead." << std::endl;
}