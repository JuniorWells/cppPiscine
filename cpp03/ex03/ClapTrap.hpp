#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define MAX_HP 100


class ClapTrap {
	
	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		ClapTrap(std::string name, int hp, int ep, int ad);
		~ClapTrap();

		ClapTrap& 	operator=(ClapTrap const & other);

		void			attack(const std::string & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		void			setName(std::string name);
		void			setHitPoints(int hp);
		void			setEnergyPoints(int ep);
		void			setAttackDamage(int ad);

		std::string		getName(void) const;
		int				getHitPoints(void) const;
		int				getEnergyPoints(void) const;
		int				getAttackDamage(void) const;

	protected:

		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
};

#endif