#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Presidential Pardon Form", 25, 5) {
	this->_target = "";
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target): Form("Presidential Pardon Form", 25, 5) {
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) {
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(){

}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const & src) {
	if (this != &src)
		this->_target = src.getTarget();
	return *this;
}

std::string	PresidentialPardonForm::getTarget(void) const{
	return this->_target;
}

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const{
		if (this->getIsSigned() == false) {
			throw Form::NoSignRightsException();
		} else {
			if (this->getExecGrade() >= executor.getGrade()) {
				std::cout << this->getTarget() + " has been pardoned by Zaphod Beeblebrox." << std::endl;
			} else {
				throw Form::GradeTooLowException();
			}
		}
}