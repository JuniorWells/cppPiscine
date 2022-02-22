#include "FragTrap.hpp"

// DEFAULT

FragTrap::FragTrap(){
	std::cout << "FragTrap constructor called" << std::endl;
	this->setName("");
	this->setHitPoints(HP);
	this->setEnergyPoints(EP);
	this->setAttackDamage(AD);
}

FragTrap::FragTrap(std::string name) {
	std::cout << "Name FragTrap constructor called" << std::endl;
	this->setName(name);
	this->setHitPoints(HP);
	this->setEnergyPoints(EP);
	this->setAttackDamage(AD);
}

FragTrap::FragTrap(std::string name, int hp, int ep, int ad) {
	std::cout << "Full FragTrap constructor called" << std::endl;
	this->setName(name);
	this->setHitPoints(hp);
	this->setEnergyPoints(ep);
	this->setAttackDamage(ad);
}

FragTrap::FragTrap(FragTrap const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const & other) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other){
		this->_name = other.getName();
		this->_hitPoints = other.getHitPoints();
		this->_energyPoints = other.getEnergyPoints();
		this->_attackDamage = other.getAttackDamage();
	}
	return *this;
}

void	FragTrap::attack(const std::string & target) {
	std::cout << "FragTrap " + this->getName() + " attacks " + target + " for " << this->getAttackDamage() << std::endl;
}

void	FragTrap::highFiveGuys(void) const {
	std::cout << this->_name << "High five guys! :)" << std::endl;
}