#include "FragTrap.hpp"

int		main(void){
	FragTrap a;
	FragTrap b("Trap");

	a = b;
	std::cout << "HP: " << a.getHitPoints() << std::endl;
	std::cout << "EP: " << a.getEnergyPoints() << std::endl;
	std::cout << "AD: " << a.getAttackDamage() << std::endl;

	a.attack("someone");
	a.takeDamage(5);
	a.beRepaired(2);

	FragTrap c(a);
	std::cout << "HP: " << c.getHitPoints() << std::endl;
	std::cout << "EP: " << c.getEnergyPoints() << std::endl;
	std::cout << "AD: " << c.getAttackDamage() << std::endl;

	c.highFiveGuys();
	c.takeDamage(200);
	c.takeDamage(2);
	c.highFiveGuys();
	return (0);
}