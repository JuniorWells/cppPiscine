#include "Span.hpp"

int		main() {

	std::cout << std::endl << "Normality" << std::endl;
	Span s(7);
	s.addNumber(5);
	s.addNumber(6);
	s.addNumber(7);
	s.addNumber(100);
	s.addNumber(24);
	s.addNumber(-123);
	s.addNumber(2);
	std::cout << s.shortestSpan() << std::endl;
	std::cout << s.longestSpan() << std::endl;

	std::cout << std::endl << "Exceptions" << std::endl;
	Span s1(1);
	try {
		std::cout << s1.shortestSpan() << std::endl;
	} catch (Span::NoSpanPossible& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		std::cout << s1.longestSpan() << std::endl;
	} catch (Span::NoSpanPossible& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "Current size: " << s1.getVector().size() << std::endl;
	s1.addNumber(9);
	std::cout << "Current size: " << s1.getVector().size() << std::endl;
	s1.addNumber(2);

	std::cout << std::endl << "10000 numbers" << std::endl;
	Span s2(10000);
	srand(time(NULL));
	for (unsigned int i = 0; i < s2.getSize(); ++i) {
		s2.addNumber(rand());
		std::cout << s2.getVector()[i] << std::endl;
	}
	return (0);
}