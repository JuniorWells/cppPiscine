#include "Form.hpp"

// Constructors & Destructors

Form::Form(void): _formName("Standard Form"), _signGrade(1), _execGrade(1), _isSigned(false) {

}

Form::Form(std::string form, unsigned int sG, unsigned int eG): _formName(form), _signGrade(sG), _execGrade(eG), _isSigned(false) {
	try {
		if (sG > 150 || eG > 150) {
			throw Form::GradeTooLowException();
		} else if (sG < 1 || eG < 1) {
			throw Form::GradeTooHighException();
		}
	} catch(Form::GradeTooLowException& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	} catch(Form::GradeTooHighException& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}

Form::Form(Form const & src): _formName(src._formName), _signGrade(src._signGrade), _execGrade(src._execGrade), _isSigned(src._isSigned) {
	*this = src;
}

Form::~Form(void){

}

// Operators

Form&			Form::operator=(Form const & other) {
	if (this != &other)
		return *this;
	return *this;
}

std::ostream&	operator<<(std::ostream o, Form & obj) {
	return (o << "Form " + obj.getFormName() + " with sign grade " << obj.getSignGrade() << " and execution grade " 
	<< obj.getExecGrade() << " is " << (( obj.getIsSigned()) ? " signed" : " not signed" ) << std::endl );
}

// Getters

std::string		Form::getFormName(void) {
	return this->_formName;
}

unsigned int	Form::getSignGrade(void) {
	return this->_signGrade;
}

unsigned int	Form::getExecGrade(void) {
	return this->_execGrade;
}

bool			Form::getIsSigned(void) {
	return this->_isSigned;
}

// Class Functions

void	Form::beSigned(Bureaucrat const & b){
	// try {
		b.getGrade() <= this->getSignGrade() 
			? this->_isSigned = true 
			: throw Form::GradeTooLowException();
	// } catch(Form::GradeTooLowException & e) {
	// 	std::cout << e.what() << std::endl;
	// }
}

// Nested Classes
const char * Form::GradeTooHighException::what() const throw () {
	return ("Grade too high");
}

const char * Form::GradeTooLowException::what() const throw () {
	return ("Grade too low");
}