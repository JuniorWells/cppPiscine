#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main() {
	std::cout << "Declarations" << std::endl << std::endl;
	Bureaucrat	b("Kostas" , 3);
	Bureaucrat	c("Noob", 149);
	Form	*fshrub = new ShrubberyCreationForm("Target");
	Form	*frobot = new RobotomyRequestForm("Target");
	Form	*fpres = new PresidentialPardonForm("Target");

	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << *fshrub << std::endl;
	std::cout << *frobot << std::endl;
	std::cout << *fpres << std::endl;

	std::cout << std::endl << "#################" << std::endl << std::endl;
	
	std::cout << c.getName() + " tries signing and executing" << std::endl << std::endl;
	c.signForm(*fshrub);
	c.signForm(*frobot);
	c.signForm(*fpres);
	c.executeForm(*fshrub);
	c.executeForm(*frobot);
	c.executeForm(*fpres);

	std::cout << std::endl << "#################" << std::endl << std::endl;

	std::cout << b.getName() + " signs, and " + c.getName() + " executes" << std::endl << std::endl;
	b.signForm(*fshrub);
	b.signForm(*frobot);
	b.signForm(*fpres);
	c.executeForm(*fshrub);
	c.executeForm(*frobot);
	c.executeForm(*fpres);

	std::cout << std::endl << "#################" << std::endl << std::endl;

	std::cout << b.getName() + " signs and executes" << std::endl << std::endl;
	b.signForm(*fshrub);
	b.signForm(*frobot);
	b.signForm(*fpres);
	b.executeForm(*fshrub);
	b.executeForm(*frobot);
	b.executeForm(*fpres);

	delete fshrub;
	delete frobot;
	delete fpres;

	return (0);
}