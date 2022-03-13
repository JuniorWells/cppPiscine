#pragma once
#define EASYFIND_HPP

#include <iostream>
#include <list>

class NotFound: public std::exception {

	public:
		const char * what() const throw() {
			return "Not found in the list";
		}
};

template <typename T>
T const &	easyfind(std::list<T> list, int const x) {
	for (typename std::list<T>::iterator it = list.begin(); it != list.end(); it++) {
		if (*it == x) { return *it; }
	}
	throw NotFound();
}
