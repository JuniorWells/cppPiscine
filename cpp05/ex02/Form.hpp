#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	public:
		Form();
		Form(std::string form, unsigned int sG, unsigned int eG);
		Form(Form const & src);
		virtual ~Form();

		Form&	operator=(Form const & other);

		class GradeTooHighException: public std::exception {
			public:
				const char * what() const throw ();
		};

		class GradeTooLowException: public std::exception {
			public:
				const char * what() const throw ();
		};

		class NoSignRightsException: public std::exception {
			public:
				const char * what() const throw ();
		};

		virtual std::string		getFormName() const;
		virtual unsigned int	getSignGrade() const;
		virtual unsigned int	getExecGrade() const;
		virtual bool			getIsSigned() const;

		virtual void		beSigned(Bureaucrat const & b);

		virtual void		execute(Bureaucrat const & executor) const = 0;
	
	private:
		const std::string	_formName;
		const unsigned int	_signGrade;
		const unsigned int	_execGrade;
		bool				_isSigned;
};

std::ostream&	operator<<(std::ostream &o, Form & obj);

#endif