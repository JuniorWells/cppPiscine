#include "FragTrap.hpp"

int		main(void){
	FragTrap a;
	FragTrap b("Trap");
	FragTrap c("Another Trap", 20, 20, 5);

	a.setName("Wrap");
	std::cout << "Name: " + a.getName() << ", HP: " << a.getHitPoints() << ", EP: " << a.getEnergyPoints() << ", AD: " << a.getAttackDamage() << std::endl;
	std::cout << "Name: " + b.getName() << ", HP: " << b.getHitPoints() << ", EP: " << b.getEnergyPoints() << ", AD: " << b.getAttackDamage() << std::endl;
	std::cout << "Name: " + c.getName() << ", HP: " << c.getHitPoints() << ", EP: " << c.getEnergyPoints() << ", AD: " << c.getAttackDamage() << std::endl;


	a.highFiveGuys();
	a.attack("vaggos");
	a.takeDamage(20);
	return (0);
}