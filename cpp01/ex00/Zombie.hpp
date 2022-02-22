#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
	public:
		void	announce( void );

		Zombie (std::string name);
		~Zombie ();

	private:
		std::string _name;
};

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif