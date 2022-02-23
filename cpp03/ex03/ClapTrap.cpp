#include "ClapTrap.hpp"

// DEFAULT

ClapTrap::ClapTrap(): _name(""), _hitPoints(MAX_HP), _energyPoints(MAX_EP), _attackDamage(BASE_AD) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name) {
	std::cout << "Name constructor called" << std::endl;
	this->_hitPoints = MAX_HP;
	this->_energyPoints = MAX_EP;
	this->_attackDamage = BASE_AD;
}

ClapTrap::ClapTrap(std::string name, int hp, int ep, int ad): _name(name), _hitPoints(hp), _energyPoints(ep), _attackDamage(ad) {
	std::cout << "Full constructor called" << std::endl; 
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & other) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other){
		this->_name = other.getName();
		this->_hitPoints = other.getHitPoints();
		this->_energyPoints = other.getEnergyPoints();
		this->_attackDamage = other.getAttackDamage();
	}
	return *this;
}

// GETTERS

std::string		ClapTrap::getName(void) const{
	return this->_name;
}

int				ClapTrap::getHitPoints(void) const{
	return this->_hitPoints;
}

int				ClapTrap::getEnergyPoints(void) const{
	return this->_energyPoints;
}

int				ClapTrap::getAttackDamage(void) const{
	return this->_attackDamage;
}

// SETTERS

void	ClapTrap::setName(std::string name){
	this->_name = name;
}

void	ClapTrap::setHitPoints(int hp){
	this->_hitPoints = hp;
}

void	ClapTrap::setEnergyPoints(int ep){
	this->_energyPoints = ep;
}

void	ClapTrap::setAttackDamage(int ad){
	this->_attackDamage = ad;
}

// CLASS SPECIFIC

void		ClapTrap::attack(const std::string & target){
	if (this->_hitPoints > 0 && this->_energyPoints > 0){
		std::cout << "ClapTrap " + this->_name + " attacks " + target + ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->_energyPoints--;
	} else {
		if (this->_hitPoints <= 0)
			std::cout << this->_name << " does not have enough HP to perform any kind of action." << std::endl;
		else
			std::cout << this->_name << " does not have enough energy to perform any kind of action." << std::endl;
	}
}

void		ClapTrap::takeDamage(unsigned int amount){
	if (this->_hitPoints > 0){
		std::cout << "ClapTrap " + this->_name + " took " << amount << " points of damage!" << std::endl;
		this->_hitPoints -= amount;
	} else {
		std::cout << this->_name << " does not have enough HP to perform any kind of action, not even accept beating." << std::endl;
	}
}

void		ClapTrap::beRepaired(unsigned int amount){
	if (this->_hitPoints > 0 && this->_energyPoints > 0){
		std::cout << "ClapTrap " + this->_name + " tried to heal for " << amount << " hit points!" << std::endl;
		this->_energyPoints--;
		this->_hitPoints += amount;
		if (this->_hitPoints > MAX_HP) { this->_hitPoints = MAX_HP ;}
	} else {
		if (this->_hitPoints <= 0)
			std::cout << this->_name << " does not have enough HP to perform any kind of action." << std::endl;
		else
			std::cout << this->_name << " does not have enough energy to perform any kind of action." << std::endl;
	}
}


