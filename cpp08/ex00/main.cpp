#include "easyfind.hpp"

int		main(){
	
	std::cout << std::endl << "Integer" << std::endl;
	std::list<int> l ;
	l.push_front(9);
	l.push_back(42);
	l.push_back(1);

	try {
		std::cout << ::easyfind(l, 98) << std::endl;
	} catch (NotFound& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "Float" << std::endl;
	std::list<float> f;
	f.push_back(123);
	f.push_back(12);
	f.push_back(13);
	f.push_back(3);

	try {
		std::cout << easyfind(f, 3) << std::endl;
		std::cout << easyfind(f, 5) << std::endl;
	} catch (NotFound& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "Character" << std::endl;

	std::list<char> c;
	c.push_back('a');
	c.push_back('c');
	c.push_back('z');

	try {
		std::cout << easyfind(c, 'a') << std::endl;
	} catch (NotFound& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "Double" << std::endl;

	std::list<double> d;
	d.push_back(2.4);
	d.push_back(6.4);
	d.push_back(9.0);
	
	try {
		std::cout << ::easyfind(d, 3) << std::endl;
	} catch (NotFound& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return (0);
}