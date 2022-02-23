#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int		main(void){
	ScavTrap a;
	// ScavTrap b("Trap");
	ScavTrap c("Another Trap", 20, 2, 5);
	// ClapTrap d("clap");
	a = c;

	// a.setName("Wrap");
	std::cout << "Name: " + a.getName() << ", HP: " << a.getHitPoints() << ", EP: " << a.getEnergyPoints() << ", AD: " << a.getAttackDamage() << std::endl;
	// std::cout << "Name: " + b.getName() << ", HP: " << b.getHitPoints() << ", EP: " << b.getEnergyPoints() << ", AD: " << b.getAttackDamage() << std::endl;
	// std::cout << "Name: " + c.getName() << ", HP: " << c.getHitPoints() << ", EP: " << c.getEnergyPoints() << ", AD: " << c.getAttackDamage() << std::endl;
	// std::cout << "Name: " + d.getName() << ", HP: " << d.getHitPoints() << ", EP: " << d.getEnergyPoints() << ", AD: " << d.getAttackDamage() << std::endl;
	a.attack("malakas");
	a.takeDamage(19);
	a.beRepaired(1000);
	std::cout << a.getHitPoints() << std::endl;
	a.attack("malakas");
	// c.attack(b.getName());
	// c.attack("agisilaos");
	// c.takeDamage(10);
	// // c.beRepaired(20);
	// // c.takeDamage(30);
	// // c.beRepaired(40);
	// for (int i = 0; i < 5; i++)
	// 	c.attack("vaggos");
	return (0);
}