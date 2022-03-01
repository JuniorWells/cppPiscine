#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
	for (int i = 0; i < 4; i++){
		this->_mater[i] = nullptr;
	}
}

MateriaSource::MateriaSource(MateriaSource const & src){
	*this = src;
}
MateriaSource::~MateriaSource(void){
	for (int i = 0; i < 4; i++){
		if (this->_mater[i] != nullptr){
			delete this->_mater[i];
		}
	}
}

MateriaSource&	MateriaSource::operator=(MateriaSource const & other){
	if (this != &other){
		this->_type = other._type;
		for (int i = 0; i < 4; i++) {
			if (this->_mater != nullptr) {
				delete this->_mater[i];
				this->_mater[i] = nullptr;
			}
		}
		for (int i = 0; i < 4; i++) {
			if (other._mater[i] != nullptr) { 
				this->_mater[i] = other._mater[i]->clone();
			}
		}
	}
	return *this;
}

std::string		MateriaSource::getMateriaType(void) const{
	return this->_type;
}

void			MateriaSource::setMateriaType(std::string const & type){
	this->_type = type;
}

void	MateriaSource::learnMateria(AMateria* mat){
	if (mat == nullptr) { return ;}
	for (int i = 0; i < 4; i++){
		if (this->_mater[i] == nullptr){
			this->_mater[i] = mat->clone();
			return ;
		}
	}
}

AMateria*		MateriaSource::createMateria(std::string const & type){
	if (type.empty()) {return 0;} 
	for (int i = 0; i < 4; i++){
		if (this->_mater[i]->getType() == type){
			return this->_mater[i]->clone();
		}
	}
	return 0;
}