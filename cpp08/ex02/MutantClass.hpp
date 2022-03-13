#pragma once
#define MUTANTSTACK_HPP

#include <stack>

template <class T>
class MutantStack: public std::stack<T> {

	public:
		MutantStack() {};
		MutantStack(MutantStack const & src) { *this = src; }
		~MutantStack() {};
		MutantStack& operator=(MutantStack const & src) { (void)src; return *this; }

		typedef typename std::stack<T>::container_type::iterator	iterator;
		iterator begin() { return std::stack<T>::c.begin(); }
		iterator end() { return std::stack<T>::c.end(); }
};
