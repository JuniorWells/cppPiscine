#include "Character.hpp"

Character::Character(void) {
	// std::cout << "Character default constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = nullptr;
}

Character::Character(std::string const & name): _name(name) {
	// std::cout << "Character name constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = nullptr;
}

Character::Character(Character const & src){
	//std::cout << "Copy Character constructor" << std::endl;
	*this = src;
}

Character&	Character::operator=(Character const & src){
	if (this != &src) {
		this->_name = src.getName();
		for (int i = 0; i < 4; i++){
			if (this->_inv[i]) { 
				delete this->_inv[i];
				this->_inv[i] = nullptr;
			}
		}
		for (int i = 0; i < 4; i++) {
			if (src._inv[i] == nullptr) { break; }
			if (src._inv[i]->getType() == "ice") {
				this->_inv[i] = src._inv[i]->clone();
			} else if (src._inv[i]->getType() == "cure") {
				this->_inv[i] = src._inv[i]->clone();
			}
		}
	}
	return (*this);
}

Character::~Character(void) {
	// std::cout << "Character default destructor" << std::endl;
	for (int i = 0; i < 4; i++){
		if (this->_inv[i]) { delete this->_inv[i];}
	}
}

AMateria*	Character::getInv( void ) const{
	return (*this->_inv);
}

std::string const &	Character::getName(void) const{
	return this->_name;
}

void	Character::equip(AMateria* m){
	if (m == nullptr) { return ; }
	for (int i = 0; i < 4; i++){
		if (this->_inv[i] == nullptr){
			this->_inv[i] = m->clone();
			return ;
		}
	}
}

void	Character::unequip(int idx){
	if (idx < 0 || idx > 3) {return ;}
	if (this->_inv[idx] == nullptr) { 
		return ;
	} else {
		delete this->_inv[idx];
		this->_inv[idx] = nullptr;
	}
}

void	Character::use(int idx, ICharacter& target){
	if (this->_inv[idx] == nullptr || idx > 3 || idx < 0) {return ;}
	if (this->_inv[idx]->getType() == "ice" || this->_inv[idx]->getType() == "cure")
		this->_inv[idx]->use(target);
}
