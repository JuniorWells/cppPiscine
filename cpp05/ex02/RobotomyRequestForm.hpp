#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
//#include <time.h>
//#include <stdlib.h>

class Bureaucrat;

class RobotomyRequestForm : public Form {

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		~RobotomyRequestForm();

		RobotomyRequestForm& operator=(RobotomyRequestForm const & src);

		void		execute(Bureaucrat const & executor) const;

		std::string	getTarget(void) const;

	private:
		std::string	_target;
};

#endif