#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T * arr, size_t len, T& (*foo)(T &)) {
	for (size_t i = 0; i < len; i++)
		arr[i] = foo(arr[i]);
}

template <typename T>
T&	foo(T & elem) { return ++elem; }

template <typename T>
T&	redundant(T & elem) { std::cout <<  "Only for tourists: " << elem << std::endl; return elem;}


#endif
