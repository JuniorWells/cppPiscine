#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.class.hpp"

int		main(void)
{
	std::string	s;
	PhoneBook	phoneBook;

	while (1) {
		std::cout << std::endl << "\033[1;36mWhat do u want to do with the phonebook?\033[0m" << std::endl;
		std::cout << "\033[1;36mADD - SEARCH - EXIT\033[0m" << std::endl;
		std::getline (std::cin, s);
		if (!s.compare("ADD")) { 
			if (phoneBook.addContact()) { ++phoneBook.size; }
		}
		else if (!s.compare("SEARCH")) {
			if (!phoneBook.size) { std::cout << "\033[1;31mNo contacts\033[0m" << std::endl; continue; }
			phoneBook.printContacts();
			std::cout << std::endl << "\033[1;36mPick an index\033[0m" << std::endl;
			std::getline (std::cin, s);
			if (s.empty()) {std::cout << "\033[1;31mThat could be an uncaught exception\033[0m" << std::endl; }
			else if (s.length() > 1 && phoneBook.is_digit(s)) { std::cout << "\033[1;31mYou should enter a valid number, it is not hard :)\033[0m" << std::endl ;}
			else if (phoneBook.is_digit(s) && (std::stoi(s) >=0 && std::stoi(s) < 8)) { phoneBook.printOne(std::stoi(s));}
			else { std::cout << "\033[1;31mYou should enter a valid number, it is not hard :)\033[0m" << std::endl ;}
		}
		else if (!s.compare("EXIT")) { std::cout << std::endl << "\033[1;31mFarewell stranger\033[0m" << std::endl; break ;}
		else { std::cout << std::endl << "\033[1;31mYou have to pick one of the above\033[0m" << std::endl; }
	}
	return (0);
}
