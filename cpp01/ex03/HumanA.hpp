#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	public:

		std::string	human;
		Weapon		&weap;
		HumanA(const std::string name, Weapon &weapon);
		~HumanA();

		void	attack(void) const;
};

#endif