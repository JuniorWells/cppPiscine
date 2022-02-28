#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {

	public:
		Brain();
		Brain(Brain const & src);
		~Brain();

		Brain&	operator=(Brain const & other);
	
		const std::string*	getIdeas(void) const;
		void				setIdeas(const std::string *ideas);

	private:
		std::string		_ideas[100];
};

#endif