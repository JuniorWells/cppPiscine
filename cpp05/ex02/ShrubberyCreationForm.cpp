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
			throw Form::NoSignRightsException();
		} else {
			if (this->getExecGrade() >= executor.getGrade()) {
				std::ofstream file;
				file.open(this->getTarget() + "_shrubbery");
				if (file.is_open()) {
					file << std::endl;
					file << "      .              .              ;%     ;; " << std::endl;
					file << "        ,           ,                :;%  %; " << std::endl;
					file << "         :         ;                   :;%;'     ., " << std::endl;
					file << ",.        %;     %;            ;        %;'    ,; " << std::endl;
					file << "  ;       ;%;  %%;        ,     %;    ;%;    ,%' " << std::endl;
					file << "   %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
					file << "    ;%;      %;        ;%;        % ;%;  ,%;' " << std::endl;
					file << "     `%;.     ;%;     %;'         `;%%;.%;' " << std::endl;
					file << "      `:;%.    ;%%. %@;        %; ;@%;%' " << std::endl;
					file << "         `:%;.  :;bd%;          %;@%;' " << std::endl;
					file << "           `@%:.  :;%.         ;@@%;' " << std::endl;
					file << "             `@%.  `;@%.      ;@@%; " << std::endl;
					file << "               `@%%. `@%%    ;@@%; " << std::endl;
					file << "                 ;@%. :@%%  %@@%; " << std::endl;
					file << "                   %@bd%%%bd%%:; " << std::endl;
					file << "                     #@%%%%%:;; " << std::endl;
					file << "                     %@@%%%::; " << std::endl;
					file << "                     %@@@%(o);  . ' " << std::endl;
					file << "                     %@@@o%;:(.,' " << std::endl;
					file << "                 `.. %@@@o%::; " << std::endl;
					file << "                    `)@@@o%::; " << std::endl;
					file << "                     %@@(o)::; " << std::endl;
					file << "                    .%@@@@%::; " << std::endl;
					file << "                    ;%@@@@%::;. " << std::endl;
					file << "                   ;%@@@@%%:;;;. " << std::endl;
					file << "               ...;%@@@@@%%:;;;;,..  ";
				}
				file.close();
			} else {
				throw Form::GradeTooLowException();
			}
		}
}