#include "Array.hpp"

// Constructors & Destructors

template<typename T>
Array<T>::Array(): _array(nullptr), _size(0){

}

template<typename T>
Array<T>::Array(unsigned int n): _array(nullptr), _size(n){
	this->_array = new T[n]();
}

template<typename T>
Array<T>::Array(Array<T> const & src): _array(nullptr), _size(0){
	if (src._size > 0) {
		this->_array = new T[src._size]();
		for (unsigned int i = 0; i < src._size; i++)
			this->_array[i] = src._array[i]; 
	}
	this->_size = src._size;
}

template<typename T>
Array<T>::~Array(void){
	if (this->_size > 0)
		delete [] this->_array;
}

// Operators

template<typename T>
Array<T>&	Array<T>::operator=(Array<T> const & src){
	if (this->_size > 0)
		delete [] this->_array;
	this->_array = nullptr;
	if (src._size > 0){
		this->_array = new T[src._size]();
		for (unsigned int i = 0; i < src._size; i++)
			this->_array[i] = src._array[i];
	}
	this->_size = src._size;
	return *this;
}

template<typename T>
T&	Array<T>::operator[](unsigned int i){
	if (i >= this->_size)
		throw Array::OutOfBounds();
	return (this->_array[i]);
}

template<typename T>
T const &	Array<T>::operator[](unsigned int i) const {
	return (operator[](i));
}

// The rest

template<typename T>
unsigned int	Array<T>::size(void) const{
	return this->_size;
}

template<typename T>
const char *	Array<T>::OutOfBounds::what() const throw(){
	return ("Exception caught: Out of bounds");
}
