#include "DiamondTrap.hpp"

int		main() {
	DiamondTrap d("kostas");
	
	d.whoAmI();
	std::cout << "HP: " << d.getHitPoints() << std::endl;
	std::cout << "EP: " << d.getEnergyPoints() << std::endl;
	std::cout << "AD: " << d.getAttackDamage() << std::endl;
	d.attack("someone");
	d.takeDamage(20);
	std::cout << "Now " + d.getName() + " has " <<d.getHitPoints() << std::endl;
	d.beRepaired(90);
	std::cout << "Now " + d.getName() + " has " <<d.getHitPoints() << std::endl;

	DiamondTrap a;
	a = d;
	a.whoAmI();
	std::cout << "HP: " << a.getHitPoints() << std::endl;
	std::cout << "EP: " << a.getEnergyPoints() << std::endl;
	std::cout << "AD: " << a.getAttackDamage() << std::endl;
	a.attack("someone");
	a.takeDamage(20);
	std::cout << "Now " + a.getName() + " has " <<a.getHitPoints() << std::endl;
	a.beRepaired(90);
	std::cout << "Now " + a.getName() + " has " <<a.getHitPoints() << std::endl;

	return 0;
}