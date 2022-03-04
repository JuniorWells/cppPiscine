#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	public:
		Form();
		Form(std::string form, unsigned int sG, unsigned int eG);
		Form(Form const & src);
		~Form();

		Form&	operator=(Form const & other);

		class GradeTooHighException: public std::exception {
			public:
				const char * what() const throw ();
		};

		class GradeTooLowException: public std::exception {
			public:
				const char * what() const throw ();
		};

		std::string		getFormName();
		unsigned int	getSignGrade();
		unsigned int	getExecGrade();
		bool			getIsSigned();

		void			beSigned(Bureaucrat const & b);
	
	private:
		const std::string	_formName;
		const unsigned int	_signGrade;
		const unsigned int	_execGrade;
		bool				_isSigned;
};

std::ostream&	operator<<(std::ostream &o, Form & obj);

#endif