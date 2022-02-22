#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
	public:
		void	announce(void);

		Zombie();
		Zombie(std::string name);
		~Zombie();

		void		setName(std::string name);
	private:
		std::string _name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif