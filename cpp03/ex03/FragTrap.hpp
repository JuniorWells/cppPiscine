#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#define HP 100
#define EP 50

class FragTrap : public virtual ClapTrap{

	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap(std::string name, int hp, int ep, int ad);
		FragTrap(FragTrap const & src);
		~FragTrap();

		FragTrap& 	operator=(FragTrap const & other);

		void		attack(const std::string & target);
		void		highFiveGuys(void) const;

};

#endif