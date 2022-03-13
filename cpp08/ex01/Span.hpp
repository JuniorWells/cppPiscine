#pragma once
#define SPAN_HPP

#include <vector>
#include <iostream>
//#include <cmath>

class Span {


	public:
		typedef	std::vector<int>::iterator iter;

		Span(unsigned int N);
		Span(Span const & src);
		~Span();

		Span&	operator=(Span const & src);

		class	NoSpanPossible: public std::exception {
			public:
				const char *	what() const throw();
		};

		class	OutOfBounds: public std::exception {
			public:
				const char *	what() const throw();
		};

		class	NoMemory: public std::exception {
			public:
				const char *	what() const throw();
		};

		void				addNumber(int x);
		unsigned int		shortestSpan() const;
		unsigned int		longestSpan() const;

		unsigned int		getSize() const;
		std::vector<int>	getVector() const;

	private:
		std::vector<int>	_v;
		unsigned int		_size;
		Span();

};

//std::ostream&	operator<<(std::ostream &o, Span const & obj){

//}