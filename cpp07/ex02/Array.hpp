#pragma once
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {

	public:
		Array();
		Array(unsigned int n);
		Array(Array<T> const & src);
		~Array();

		Array&		operator=(Array<T> const & src);
		T&			operator[](unsigned int i);
		T const &	operator[](unsigned int i) const;
		class OutOfBounds: public std::exception {
			public:
				virtual const char *	what() const throw();
		};

		unsigned int	size() const;

	private:
		T*				_array;
		unsigned int	_size;

};

#include "Array.tpp"