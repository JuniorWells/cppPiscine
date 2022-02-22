#include "Zombie.hpp"

int		main( void ) {

	std::cout << "Class call" << std::endl;
	Zombie	k("kostas");
	k.announce();

	std::cout << "Random Chump" << std::endl;
	randomChump("timotheos");

	std::cout << "New Zombie" << std::endl;
	Zombie *n = newZombie("Napolewn");
	n->announce();
	delete(n);
	system("leaks zombie");
	return 0;
}