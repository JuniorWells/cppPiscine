#include "Zombie.hpp"

int		main( void ) {

	Zombie* horde = zombieHorde(5 , "Eteoklis");
	horde[0].announce();
	//delete [] horde;
	// system("leaks zombieHorde");

	return (0);
}
