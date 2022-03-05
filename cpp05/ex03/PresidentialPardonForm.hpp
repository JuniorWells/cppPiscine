#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form {

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		~PresidentialPardonForm();

		PresidentialPardonForm& operator=(PresidentialPardonForm const & src);

		void		execute(Bureaucrat const & executor) const;

		std::string	getTarget(void) const;

	private:
		std::string	_target;
};

#endif