#include "ClapTrap.hpp"

int		main(void){
	ClapTrap a;
	ClapTrap b("Trap");
	ClapTrap c("Another Trap", 20, 20, 5);

	a.setName("Wrap");
	std::cout << "Name: " + a.getName() << ", HP: " << a.getHitPoints() << ", EP: " <<a.getEnergyPoints() << ", AD: " << a.getAttackDamage() << std::endl;
	std::cout << "Name: " + b.getName() << ", HP: " << b.getHitPoints() << ", EP: " <<b.getEnergyPoints() << ", AD: " << b.getAttackDamage() << std::endl;
	std::cout << "Name: " + c.getName() << ", HP: " << c.getHitPoints() << ", EP: " <<c.getEnergyPoints() << ", AD: " << c.getAttackDamage() << std::endl;

	c.attack(b.getName());
	c.takeDamage(10);
	c.beRepaired(20);
	c.takeDamage(30);
	c.beRepaired(40);
	// for (int i = 0; i < 12; i++)
	// 	b.attack("Vaggos");
	return (0);
}