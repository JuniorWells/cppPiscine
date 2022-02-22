#include "Karen.hpp"

int		main( int argc, char **argv ) {
	
	if (argc != 2){
		std::cout << "Invalid arguments Karen" << std::endl;
		return (1);
	}
	Karen k;
	k.complain(argv[1]);
	return (0);
}