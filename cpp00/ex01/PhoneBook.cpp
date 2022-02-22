#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void){
	this->size = 0;
}

PhoneBook::~PhoneBook(void){

}

void	PhoneBook::formatContact(std::string &s){
	s.length() > 10 ? s.replace(9, 1, ".").erase(10) : s;
}

void	PhoneBook::printContacts(void){

	Contact c;
	int		size;

	this->size > 8 ? size = 8 : size = this->size;
	for (int i = 0; i < size; i ++)
	{
		c = this->get(i);
		std::cout << std::endl;
		std::cout << i << "|";
		std::cout << std::setw(10);
		formatContact(c.firstName);
		std::cout << c.firstName << "|";
		std::cout << std::setw(10);
		formatContact(c.lastName);
		std::cout << c.lastName << "|";
		std::cout << std::setw(10);
		formatContact(c.nickname);
		std::cout << c.nickname << "|";
		std::cout << std::setw(10);
		formatContact(c.phoneNumber);
		std::cout << c.phoneNumber << "|";
	}
	std::cout << std::endl;
}

void	PhoneBook::printOne(int i){
	
	Contact c;
	c = get(i);
	std::cout << std::endl;
	std::cout << "\033[1;32mFirst Name:\t\033[0m" << c.firstName << std::endl;
	std::cout << "\033[1;32mLast Name:\t\033[0m" << c.lastName << std::endl;
	std::cout << "\033[1;32mNickname:\t\033[0m" << c.nickname << std::endl;
	std::cout << "\033[1;32mPhone Number:\t\033[0m" << c.phoneNumber << std::endl;
}

bool	PhoneBook::is_digit(std::string &s) {
	return s.find_first_not_of("0123456789") == std::string::npos;
}

int		PhoneBook::addContact(void){

	Contact contact;
	std::cout << std::endl;
	std::cout << "\033[1;32mInsert first name:\033[0m" << std::endl;
	std::getline(std::cin, contact.firstName);
	std::cout << "\033[1;32mInsert last name:\033[0m" << std::endl;
	std::getline(std::cin, contact.lastName);
	std::cout << "\033[1;32mInsert nickname:\033[0m" << std::endl;
	std::getline(std::cin, contact.nickname);
	std::cout << "\033[1;32mInsert phone number:\033[0m" << std::endl;
	std::getline(std::cin, contact.phoneNumber);
	if (!is_digit(contact.phoneNumber)) {
		std::cout << "\033[1;31mInsert a valid phone number\033[0m" << std::endl;
		return (0);
	}
	std::cout << "\033[1;32mInsert darkest secret:\033[0m" << std::endl;
	std::getline(std::cin, contact.darkestSecret);
	if (contact.phoneNumber.empty() || contact.firstName.empty() || contact.lastName.empty() \
	|| contact.nickname.empty() || contact.darkestSecret.empty()) {
		std::cout << "\033[1;31mNo field can be empty\033[0m" << std::endl ;
		return (0);
	}
	this->set(contact);
	return (1);
}

Contact	PhoneBook::get(int i){
	return _contact[i];
}

void	PhoneBook::set(Contact contact){

	int size;

	this->size >= 8 ? size = this->size % 8 : size = this->size;
	_contact[size].firstName = contact.firstName;
	_contact[size].lastName = contact.lastName;
	_contact[size].nickname = contact.nickname;
	_contact[size].phoneNumber = contact.phoneNumber;
	_contact[size].darkestSecret = contact.darkestSecret;
}
