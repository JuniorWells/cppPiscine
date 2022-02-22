#include "ClapTrap.hpp"

int		main(void){
	ClapTrap a;
	ClapTrap b("Trap");
	ClapTrap c("Another Trap");

	a = c;

	b.attack(a.getName());
	b.takeDamage(2);
	b.beRepaired(2);
	std::cout << b.getName() << " has " << b.getHitPoints() << " hit points" << std::endl;
	b.takeDamage(5);
	b.beRepaired(10);
	std::cout << b.getName() << " has " << b.getHitPoints() << " hit points" << std::endl;
	b.takeDamage(20);
	b.attack("someone");
	return (0);
}