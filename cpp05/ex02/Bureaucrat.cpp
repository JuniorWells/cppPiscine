#include "Bureaucrat.hpp"

// Constructors / Destructors

Bureaucrat::Bureaucrat(void): _name("Your Standard Bureaucrat"), _grade(150) {
	// std::cout << "Standard Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade): _name(name) {
	// std::cout << "Infamous Bureaucrat" << std::endl;
	try {
		if (grade < 1) {
			throw Bureaucrat::GradeTooHighException();
		}
		else if (grade > 150) {
			throw Bureaucrat::GradeTooLowException();
		}
		else {
			this->_grade = grade;
		}
	} catch(Bureaucrat::GradeTooHighException& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
		this->_grade = 150;
	} catch(Bureaucrat::GradeTooLowException& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
		this->_grade = 150;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
	*this = src;
}

Bureaucrat::~Bureaucrat(void) {
	// std::cout << "Standard Bureaucrat Destructor" << std::endl;
}

// Operators

Bureaucrat&		Bureaucrat::operator=(Bureaucrat const & other) {
	if (this != &other)
		this->_grade = other.getGrade();
	return *this;
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & obj) {
	return (o << obj.getName() + ", bureaucrat grade " << obj.getGrade());
}

// Getters

const std::string	Bureaucrat::getName(void) const {
	return this->_name;
}

unsigned int		Bureaucrat::getGrade(void) const {
	return this->_grade;
}

// Nested Classes

const char * Bureaucrat::GradeTooHighException::what() const throw () {
	return ("Grade too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw () {
	return ("Grade too low");
}

// Native Classes

void	Bureaucrat::increment(void) {
	try {
		if (this->_grade - 1 < 1) {
			this->_grade = 1;
			throw Bureaucrat::GradeTooHighException();
		} else {
			this->_grade = this->getGrade() - 1;
		}
	} catch (Bureaucrat::GradeTooHighException& e) {
		std::cout << "Exception caught: " << e.what();
	}
}

void	Bureaucrat::decrement(void) {
	try {
		if (this->_grade + 1 > 150) {
			this->_grade = 150;
			throw Bureaucrat::GradeTooLowException();
		} else {
			this->_grade = this->getGrade() + 1;
		}
	} catch (Bureaucrat::GradeTooLowException& e) {
		std::cout << "Exception caught: " << e.what();
	}
}

void	Bureaucrat::signForm(Form & f) const {

	try {
		f.beSigned(*this);
		std::cout << this->getName() + " signed " + f.getFormName() << std::endl;
	} catch (std::exception &e) {
		std::cout << this->getName() + " couldn't sign " + f.getFormName() + " because " + e.what() << std::endl;
	}

}

void	Bureaucrat::executeForm(Form const & f) {
	try {
		f.execute(*this);
		std::cout << this->getName() + " executed " + f.getFormName() << std::endl;
	} catch(Form::GradeTooLowException& e) {
		std::cout << "Execution rejected. " << e.what() << std::endl;
	} catch(Form::NoSignRightsException& e) {
		std::cout << e.what() << " The incident will be reported." << std::endl;
	}

}