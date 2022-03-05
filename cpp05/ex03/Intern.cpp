#include "Intern.hpp"

// CANONICAL
Intern::Intern() {

	std::cout << "Intern Void Constructor called" << std::endl;
}

Intern::Intern(Intern &src) {

	*this = src;
	std::cout << "Intern Copy Constuctor called" << std::endl;
}

Intern& Intern::operator=(Intern const &src) {
	
	(void) src;
	return (*this);
}

Intern::~Intern() {

	std::cout << "Intern Destructor called" << std::endl;
}

Form*	Intern::_makePPF(std::string const target){
	Form* pointer = new PresidentialPardonForm(target);
	return pointer;
}

Form*	Intern::_makeRRF(std::string const target){
	Form* pointer = new RobotomyRequestForm(target);
	return pointer;
}

Form*	Intern::_makeSCF(std::string const target){
	Form* pointer = new ShrubberyCreationForm(target);
	return pointer;
}

const char * Intern::InvalidForm::what() const throw (){
	return ("Invalid Form");
}

Form* Intern::makeForm(std::string fName, std::string target) {

	ptr	p[3] = { &Intern::_makePPF, &Intern::_makeRRF, &Intern::_makeSCF };
	std::string f[3] = { "presidential pardon", "robotomy request", "shrubbery creation" };
	bool isThere = false;
	try {
		for (int i = 0; i < 3; i++) {
			if (fName == f[i]) {
				isThere = true;
				return (this->*p[i])(target);
			}
		}
		if (isThere == false)
			throw InvalidForm();
	} catch (InvalidForm& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	return nullptr;
}