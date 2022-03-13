#include "Span.hpp"

// Constructors & Destructors

Span::Span(void): _size(0) {

}

Span::Span(unsigned int N): _size(N) {
	try {
		if (this->_v.max_size() <= N)
			throw NoMemory();
	} catch (NoMemory& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

Span::Span(Span const & src) {
	*this = src;
}

Span&	Span::operator=(Span const & src) {
	if (this != &src) {
		this->_v.clear();
		this->_size = src.getSize();
		std::vector<int> temp = src.getVector();
		for (iter it = temp.begin(); it != temp.end(); ++it) {
			this->_v.push_back(*it);
		}
	}
	return *this;
}

Span::~Span(void) {

}

// Getters

unsigned int	Span::getSize(void) const {
	return this->_size;
}

std::vector<int>	Span::getVector(void) const {
	return this->_v;
}

// Member Functions

void	Span::addNumber(int x) {
	try {
		if (this->_v.size() >= this->getSize())
			throw OutOfBounds();
		this->_v.push_back(x);
	} catch (OutOfBounds& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

unsigned int	Span::shortestSpan(void) const {
	std::vector<int>	v;
	v = this->getVector();
	int ret;
	if (v.size() <= 1)
		throw NoSpanPossible();
	else {
		ret = std::abs(v[0] - v[1]);
		for (unsigned int i = 0; i < v.size(); ++i) {
			for (unsigned int j = i + 1; j < v.size(); ++j) {
				if (std::abs(v[i] - v[j]) < ret) {
					ret = std::abs(v[i] - v[j]);
				}
			}
		}
	}
	return ret;
}

unsigned int	Span::longestSpan(void) const {
	std::vector<int>	v;
	v = this->getVector();
	int ret;
	if (v.size() <= 1)
		throw NoSpanPossible();
	else {
		ret = std::abs(v[0] - v[1]);
		for (unsigned int i = 0; i < v.size(); ++i) {
			for (unsigned int j = i + 1; j < v.size(); ++j) {
				if (std::abs(v[i] - v[j]) > ret) {
					ret = std::abs(v[i] - v[j]);
				}
			}
		}
	}
	return ret;
}

// Exceptions

const char *	Span::OutOfBounds::what() const throw(){
	return ("Out of bounds");
}

const char *	Span::NoSpanPossible::what() const throw(){
	return ("No span possible");
}

const char *	Span::NoMemory::what() const throw(){
	return ("Not enough memory");
}