#include "MutantClass.hpp"
#include <iostream>
#include <list>

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "TOP: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "After pop: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "Value of *it: " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::list<int> l;

	l.push_back(5);
	l.push_back(17);
	std::cout << "TOP: " << l.back() << std::endl;
	l.pop_back();
	std::cout << "After pop: " << l.size() << std::endl;
	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	//[...]
	l.push_back(0);
	std::list<int>::iterator i = l.begin();
	std::list<int>::iterator il = l.end();
	++i;
	--i;
	while (i != il)
	{
		std::cout << "Value of *i: " << *i << std::endl;
		++i;
	}
	std::list<int> a(l);

	return 0;
}