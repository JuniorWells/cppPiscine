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

std::ostream&	operator<<(std::ostream &o, Form & obj) {
	return (o << "Form "+ obj.getFormName() + " with sign grade " << obj.getSignGrade() << " and execution grade " << obj.getExecGrade() << ( obj.getIsSigned() ? " is signed" : " is not signed" ));
}

// Getters

std::string		Form::getFormName(void) const {
	return this->_formName;
}

unsigned int	Form::getSignGrade(void) const {
	return this->_signGrade;
}

unsigned int	Form::getExecGrade(void) const {
	return this->_execGrade;
}

bool			Form::getIsSigned(void) const {
	return this->_isSigned;
}

// Class Functions

void	Form::beSigned(Bureaucrat const & b){
	b.getGrade() <= this->getSignGrade() 
		? this->_isSigned = true  
		: throw Form::GradeTooLowException();
}

// Nested Classes
const char * Form::GradeTooHighException::what() const throw () {
	return ("Grade too high.");
}

const char * Form::GradeTooLowException::what() const throw () {
	return ("Grade too low.");
}

const char * Form::NoSignRightsException::what() const throw () {
	return ("No sign rights.");
}