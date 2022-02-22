#include "Karen.hpp"

Karen::Karen ( void ) {

}

Karen::~Karen ( void ) {

}

void	Karen::complain(std::string level) {
	KarenMemFun p[4] = { &Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error };
	std::string l[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	for (int i = 0; i < 4; i++) {
		if (level == l[i])
			(this->*p[i])();
	}
}

void	Karen::_debug ( void ) {
	std::cout << "\033[1;36mI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\033[0m" << std::endl;
}

void	Karen::_info ( void ) {
	std::cout << "\033[1;32mI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\033[0m" << std::endl;
}

void	Karen::_warning ( void ) {
	std::cout << "\033[1;33mI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\033[0m" << std::endl;
}

void	Karen::_error ( void ) {
	std::cout << "\033[1;31mThis is unacceptable! I want to speak to the manager now.\033[0m" << std::endl;
}

