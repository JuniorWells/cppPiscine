#include <iostream>
#include <sstream>
#include "Data.hpp"
#include <string>
#include <iomanip>

uintptr_t serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
};

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

int		main() {

	Data *d = new Data();
	d->i = 9;
	d->s = "kostas";

	uintptr_t t;
	std::cout << "d.int: "<< d->i << std::endl;
	std::cout << "d.s: " << d->s << std::endl;
	std::cout << "d address: " << d << std::endl;
	t = serialize(d);
	delete d;
	Data *o;
	o = deserialize(t);
	std::cout << "o.int: " << o->i << std::endl;
	std::cout << "d.s: " << o->s << std::endl;
	std::cout << "d address: " << o << std::endl;

	return 0;
}