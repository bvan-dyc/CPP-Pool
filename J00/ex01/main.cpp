#include "contact_class.hpp"
#include <iostream>
#include <string>
#include <iomanip>

void handle_line(std::string line)
{
	if (line.length(void) > 10)
	{
		line.erase(9);
		std::cout << line << ".";
	}
	else
	{
		std::cout << std::setfill (' ') << std::setw (10) << line;
	}
}

void display_list(Contact contact[], int max_index)
{
	std::string 	line;

	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	for (int index = 0; index < max_index; index++)
	{
		std::cout << std::setfill (' ') << std::setw (10) << contact[index].index + 1 << "|";
		handle_line(contact[index].first_name);
		std::cout << line << "|";
		handle_line(contact[index].last_name);
		std::cout << line << "|";
		handle_line(contact[index].nickname);
		std::cout << std::endl;
	}
}

void search_contact(Contact contact[], int max_index)
{
	int index;

	display_list(contact, max_index);
	std::cout << "Please input contact index." << std::endl;
 	std::cin >> index;
	index--;
	if (std::cin.good(void))
	{
		if (index >= 0 && index < max_index)
		{
			contact[index].display_info(void);
		}
		else
			std::cout << "Contact is empty." << std::endl;
	}
	else
		std::cout << "Index is not valid" << std::endl;
}

void add_contact(Contact *contact, int index)
{
	if (index >= 7)
		std::cout << "Phonebook is full; please reboot" << std::endl;
	else
	{
		std::cout << "Please enter your first name" << std::endl;
		std::getline(std::cin, contact->first_name);
		std::cout << "Please enter your last name" << std::endl;
		std::getline(std::cin, contact->last_name);
		std::cout << "Please enter your nickname" << std::endl;
		std::getline(std::cin, contact->nickname);
		std::cout << "Please enter your login" << std::endl;
		std::getline(std::cin, contact->login);
		std::cout << "Please enter your postal address" << std::endl;
		std::getline(std::cin, contact->postal_address);
		std::cout << "Please enter your email address" << std::endl;
		std::getline(std::cin, contact->email_address);
		std::cout << "Please enter your phone number" << std::endl;
		std::getline(std::cin, contact->phone_number);
		std::cout << "Please enter your birthday date" << std::endl;
		std::getline(std::cin, contact->birthday_date);
		std::cout << "Please enter your favorite meal" << std::endl;
		std::getline(std::cin, contact->favorite_meal);
		std::cout << "Please enter your underwear color" << std::endl;
		std::getline(std::cin, contact->underwear_color);
		std::cout << "Please enter your darkest secret" << std::endl;
		std::getline(std::cin, contact->darkest_secret);
		std::cout << "Thanks for your input." << std::endl;
		contact->index = index;
	}
}

int main(void)
{
	std::string		line;
	Contact 		contact[8];
	int				index;

	index = 0;
	std::cout << "Please enter either ADD, SEARCH or EXIT" << std::endl;
	while (line != "EXIT")
	{
		std::getline(std::cin, line);
		if (line == "ADD")
		{
			add_contact(&contact[index], index);
			std::cout << "Please enter either ADD, SEARCH or EXIT" << std::endl;
			index++;
		}
		else if (line == "SEARCH")
		{
			search_contact(contact, index);
			std::cout << "Please enter either ADD, SEARCH or EXIT" << std::endl;
		}
	}
	std::cout << "THANK YOU FOR USING OUR PHONEBOOK SERVICE" << std::endl;
	return 0;
}
