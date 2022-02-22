#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#define HP 100
#define EP 50
#define AD 20

class FragTrap : public ClapTrap{

	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap(std::string name, int hp, int ep, int ad);
		FragTrap(FragTrap const & src);
		~FragTrap();

		FragTrap& 	operator=(FragTrap const & other);

		void		attack(const std::string & target);
		void		highFiveGuys(void) const;

	private:

		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
};

#endif