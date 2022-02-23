#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, FragTrap {

	public:
		DiamondTrap();
		DiamondTrap(std::string const name);
		DiamondTrap(DiamondTrap const & src);
		~DiamondTrap();

		DiamondTrap& operator=(DiamondTrap const & src);

		//virtual void			attack(const std::string & target);
		using					ScavTrap::attack;
		virtual void			takeDamage(unsigned int amount);
		virtual void			beRepaired(unsigned int amount);

		virtual std::string		getName(void) const;
		virtual void			setName(std::string name);

		void	whoAmI();
	
	private:
		std::string _name;
};

#endif