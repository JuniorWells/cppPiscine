
   
#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {

public:

	typedef Form* (Intern::*ptr)(std::string const);
	Intern();
	Intern(Intern &src);
	Intern& operator=(Intern const &src);
	~Intern();

	Form* makeForm(std::string fName, std::string target);

	class InvalidForm: public std::exception {
		public:
			const char * what() const throw ();
	};

private:
	Form*	_makePPF(std::string const target);
	Form*	_makeRRF(std::string const target);
	Form*	_makeSCF(std::string const target);
};

#endif