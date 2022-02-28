#include "Character.hpp"

Character::Character(void) {
	std::cout << "Character default constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = 0;
}

Character::Character(std::string const & name): _name(name) {
	std::cout << "Character name constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = 0;
}

Character::~Character(void) {
	std::cout << "Character default destructor" << std::endl;
}

std::string const &	Character::getName(void) const{
	return this->_name;
}

void	Character::equip(AMateria* m){
	for (int i = 0; i < 4; i++){
		if (this->_inv[i] == 0)
			this->_inv[i] = m;
	}
}

void	Character::unequip(int idx){
	if (this->_inv[idx] != 0)
		this->_inv[idx] = 0;
}
void	Character::use(int idx, ICharacter& target){
	
	if (this->_inv[idx]->getType() == "ice" || this->_inv[idx]->getType() == "cure")
		this->_inv[idx]->use(target);
	else
		return ;
		
}