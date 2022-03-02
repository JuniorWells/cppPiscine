#include "Bureaucrat.hpp"

int		main() {

	Bureaucrat a("Kostas", 40);
	Bureaucrat b("Vaggos", 0);
	Bureaucrat c("Lena", 190);

	std::cout << std::endl << "##############" << std::endl << std::endl;
	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << std::endl << "##############" << std::endl << std::endl;
	c = a;
	std::cout << a;
	std::cout << c;
	std::cout << std::endl << "##############" << std::endl << std::endl;
	std::cout << b;
	b.decrement();
	std::cout << b;
	b.increment();
	std::cout << b;

	return (0);
}