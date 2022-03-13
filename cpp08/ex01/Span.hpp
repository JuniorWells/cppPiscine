#pragma once
#define SPAN_HPP

#include <vector>
#include <iostream>

class Span {

	public:
		typedef	std::vector<int>::iterator iter;

		Span(uint N);
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
		void				fillEverything(void);
		void				addMultiple(uint start, uint finish, int x);
		uint				shortestSpan() const;
		uint				longestSpan() const;


		uint				getSize() const;
		std::vector<int>	getVector() const;

	private:
		std::vector<int>	_v;
		uint				_size;
		Span();

};
