#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <exception>

int	main() {
	Bureaucrat	b("Kostas" , 89);
	Form		f("Anmeldung" , 90, 90);

	std::cout << b << std::endl;
	std::cout << f << std::endl;
	b.signForm(f);
	std::cout << f << std::endl;

	return (0);
}