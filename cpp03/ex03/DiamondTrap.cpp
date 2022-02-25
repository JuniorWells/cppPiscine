#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
	std::cout << "Diamond Trap Default constructor called" << std::endl;
	this->_name = "";
	this->ClapTrap::setName("_clap_name");
	this->FragTrap::setHitPoints(FragTrap::getHitPoints());
	this->ScavTrap::setEnergyPoints(ScavTrap::getEnergyPoints());
	this->FragTrap::setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(std::string name){
	std::cout << "Diamond Trap Name constructor called" << std::endl;
	this->_name = name;
	this->ClapTrap::setName(name + "_clap_name");
	this->FragTrap::setHitPoints(FragTrap::getHitPoints());
	this->ScavTrap::setEnergyPoints(ScavTrap::getEnergyPoints());
	this->FragTrap::setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "Diamond Trap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const & other) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other){
		this->setName(other.getName());
		this->ClapTrap::setName(other.getName() + "_clap_name");
		this->setHitPoints(other.getHitPoints());
		this->setEnergyPoints(other.getEnergyPoints());
		this->setAttackDamage(other.getAttackDamage());
	}
	return *this;
}

void			DiamondTrap::takeDamage(unsigned int amount){
	if (this->getHitPoints() > 0){
		std::cout << "ClapTrap " + this->_name + " took " << amount << " points of damage!" << std::endl;
		this->setHitPoints(this->getHitPoints() - amount);
	} else {
		std::cout << this->_name << " does not have enough HP to perform any kind of action, not even accept beating." << std::endl;
	}
}

void			DiamondTrap::beRepaired(unsigned int amount){
	if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0){
		std::cout << "ClapTrap " + this->_name + " tried to heal for " << amount << " hit points!" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		this->setHitPoints(this->getHitPoints() + amount);
		if (this->getHitPoints() > MAX_HP) { this->setHitPoints(MAX_HP) ;}
	} else {
		if (this->getHitPoints() <= 0)
			std::cout << this->_name << " does not have enough HP to perform any kind of action." << std::endl;
		else
			std::cout << this->_name << " does not have enough energy to perform any kind of action." << std::endl;
	}
}


std::string		DiamondTrap::getName(void) const{
	return this->_name;
}

void			DiamondTrap::setName(std::string name){
	this->_name = name;
}

void			DiamondTrap::whoAmI(void){
	if (this->getHitPoints() > 0){
		std::cout << "My name is: " + this->_name << std::endl;
		std::cout << "My ClapTrap name is: " + this->ClapTrap::getName() << std::endl;
	} else {
		std::cout << this->_name + " is dead." << std::endl;
	}

}
