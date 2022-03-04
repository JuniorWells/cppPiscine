#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <exception>
#include "PresidentialPardonForm.hpp"

int	main() {
	Bureaucrat	b("Kostas" , 7);
	Form	*f = new PresidentialPardonForm("target");

	std::cout << b << std::endl;
	// std::cout << f << std::endl;
	b.signForm(*f);
	// std::cout << f << std::endl;
	b.executeForm(*f);

	return (0);
}