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

	std::cout << std::endl << "Fill with 10 random numbers" << std::endl;
	Span s2(10);
	s2.fillEverything();
	for (uint i = 0; i < s2.getSize(); i ++)
		std::cout << s2.getVector()[i] << std::endl;
	
	std::cout << std::endl << "Fill with 4 in specific slots" << std::endl;
	s2.addMultiple(4, 6, 4);

	for (uint i = 0; i < s2.getSize(); i ++)
		std::cout << s2.getVector()[i] << std::endl;

	std::cout << std::endl << "Attempt to fill with 4 outside the slots" << std::endl;
	s2.addMultiple(-1, 7, 4);
	s2.addMultiple(1, 900, 4);
	s2.addMultiple(1, 0, 4);

	//std::cout << std::endl << "Fill with 10k" << std::endl;
	//Span s3(10000);
	//s3.fillEverything();
	//for (uint i = 0; i < s3.getSize(); i ++)
	//	std::cout << s3.getVector()[i] << std::endl;
	return (0);
}