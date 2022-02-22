#include <iostream>
#include <string>

int		main( void ) {
	std::string s = "HI THIS IS BRAIN";
	std::string *stringPTR = &s;
	std::string &stringREF = s;

	std::cout << "Memory address of the string: " << &s << std::endl;
	std::cout << "Memory address of the string, but using pointer: " << stringPTR << std::endl;
	std::cout << "Memory address of the string, using reference: " << &s << std::endl << std::endl;
	std::cout << "Value of the string: " << s << std::endl;
	std::cout << "Value of the string, but using pointer: " << *stringPTR << std::endl;
	std::cout << "Value of the string, using reference: " << stringREF<< std::endl;
	return (0);
}