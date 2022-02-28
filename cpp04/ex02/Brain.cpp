#include "Brain.hpp"

Brain::Brain(void) {
	//std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(Brain const & src) {
	std::cout << "Brain copy constructor" << std::endl;
	*this = src;
}

Brain::~Brain(void) {
	//std::cout << "Brain destructor" << std::endl;
}

Brain&	Brain::operator=(Brain const & other) {
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &other)
		std::copy(other.getIdeas(), other.getIdeas() + 100, this->_ideas);
	return *this;
}

const std::string*	Brain::getIdeas(void) const{
	return this->_ideas;
}

void	Brain::setIdeas(const std::string* ideas) {
	std::copy(ideas, ideas + 100, this->_ideas);
}