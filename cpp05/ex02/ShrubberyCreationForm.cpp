#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery Creation Form", 145, 137) {
	this->_target = "";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target): Form("Shrubbery Creation Form", 145, 137) {
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) {
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){

}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src) {
	if (this != &src)
		this->_target = src.getTarget();
	return *this;
}

std::string	ShrubberyCreationForm::getTarget(void) const{
	return this->_target;
}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
		if (this->getIsSigned() == false) {
			std::cout << this->getFormName() + "needs signing. The incident will be reported." << std::endl;
		} else {
			try {
				if (this->getExecGrade() >= executor.getGrade()) {
					std::cout << executor.getName() + " executed " + this->getFormName() << std::endl;
				} else {
					throw Form::GradeTooLowException();
				}
			} catch(Form::GradeTooLowException& e) {
				std::cout << "Execution rejected. " << e.what() << std::endl;
			}
		}
}