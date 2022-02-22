#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
	public:
		int		size;

		PhoneBook(void);
		~PhoneBook(void);

		int		addContact(void);
		void	printContacts(void);
		void	printOne(int i);
		void	formatContact(std::string &s);
		bool	is_digit(std::string &s);

		Contact	get(int i);
		void	set(Contact contact);

	private:
		Contact	_contact[8];
};


#endif