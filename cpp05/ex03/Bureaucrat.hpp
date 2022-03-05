#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {

	public:
		Bureaucrat();
		Bureaucrat(const std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();

		Bureaucrat&			operator=(Bureaucrat const & other);

		class GradeTooHighException: public std::exception {
			public:
				const char * what() const throw ();
		};

		class GradeTooLowException: public std::exception {
			public:
				const char * what() const throw ();
		};

		const std::string	getName(void) const;
		unsigned int		getGrade(void) const;

		void				increment();
		void				decrement();

		void				signForm(Form & f) const;
		void				executeForm(Form const & f);

	private:
		const std::string	_name;
		unsigned int 		_grade;
};

std::ostream&		operator<<(std::ostream &o, Bureaucrat const & obj);

#endif