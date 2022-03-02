#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

int	main() {
	Bureaucrat	b("Kostas" , 99);
	Form		f("typical form" , 90, 90);

	std::cout << b.getName() << std::endl;
	//std::cout << f << std::endl;
	b.signForm(f);
	// std::cout << b.getName() << std::endl;

	return (0);
}