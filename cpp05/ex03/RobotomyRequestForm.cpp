#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy Request Form", 72, 45) {
	this->_target = "";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target): Form("Robotomy Request Form", 72, 45) {
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) {
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(){

}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const & src) {
	if (this != &src)
		this->_target = src.getTarget();
	return *this;
}

std::string	RobotomyRequestForm::getTarget(void) const{
	return this->_target;
}

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const{
		if (this->getIsSigned() == false) {
			throw Form::NoSignRightsException();
		} else {
			if (this->getExecGrade() >= executor.getGrade()) {
				std::cout << "ZZzzzZZZzzZzz" << std::endl << "BBBBbbbbZZZzzzzZZz" << std::endl;
				srand(time(NULL));
				if ((rand() % 2) == 0) {
					std::cout << this->getTarget() + " has been robotomized successfully" << std::endl;
				} else {
					std::cout << "The robotomy failed" << std::endl;
				}
			} else {
				throw Form::GradeTooLowException();
			}
		}
}