#include "Whatever.hpp"

int	main() {


	std::cout << std::endl << "Integers" << std::endl;
	int a = 2;
	int b = 3;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::cout << std::endl << "Strings" << std::endl;	
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl << "Floats" << std::endl;
	float e = 5.6;
	float f = 6.7;

	std::cout << "e = " << e << ", f = " << f << std::endl;
	::swap( e, f );
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

	std::cout << std::endl << "Chars" << std::endl;
	char g = 'z';
	char h = 'a';

	std::cout << "g = " << g << ", h = " << h << std::endl;
	::swap( g, h );
	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
	std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl;

	return 0;
}