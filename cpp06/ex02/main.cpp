#include <iostream>


class Base {
	public:
		virtual ~Base();
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base::~Base() {};

Base*	generate(void) {
	
	srand(time(NULL));
	int r = rand() % 3;

	switch (r){
		case 0:
			return new A();
		case 1:
			return new B();
		default:
			return new C();
	}
}

void	identify(Base *p) {
	if (dynamic_cast<A*>(p))
		std::cout << "Type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type C" << std::endl;
}

void	identify(Base & p) {

	Base temp;
	try {
		temp = dynamic_cast<A &>(p);
		std::cout << "Type A" << std::endl;
	} catch (std::bad_cast &e) {}
	try {
		temp = dynamic_cast<B &>(p);
		std::cout << "Type B" << std::endl;
	} catch (std::bad_cast &e) {}
	try {
		temp = dynamic_cast<C &>(p);
		std::cout << "Type C" << std::endl;
	} catch (std::bad_cast &e) {}
}

int main() {
	
	Base * pointer = generate();
	identify(pointer);
	identify(*pointer); 

	delete pointer;
	return 0;
}