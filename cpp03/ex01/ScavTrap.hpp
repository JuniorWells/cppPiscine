#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#define HP 100
#define EP 50
#define AD 20

class ScavTrap : public ClapTrap{

	public:

		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(std::string name, int hp, int ep, int ad);
		ScavTrap(ScavTrap const & src);
		~ScavTrap();

		ScavTrap& 	operator=(ScavTrap const & other);

		void		attack(const std::string & target);
		void		guardGate(void) const;

};

#endif