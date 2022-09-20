#include <iostream>
#include "header.hpp"


PhoneBook::PhoneBook() : nb_contacts(0)
{
}

void PhoneBook::add_contact()
{
	std::string contact_info;

	std::cout << "Name :";
	std::getline(std::cin, contact_info);
	contacts[nb_contacts].fill_name(contact_info);
	std::cout << "Lastname :";
	std::getline(std::cin, contact_info);
	contacts[nb_contacts].fill_lastname(contact_info);
	std::cout << "Nickname :";
	std::getline(std::cin, contact_info);
	contacts[nb_contacts].fill_lastname(contact_info);
	std::cout << "Phone number :";
	std::getline(std::cin, contact_info);
	contacts[nb_contacts].fill_lastname(contact_info);
	std::cout << "Dark little secret :";
	std::getline(std::cin, contact_info);
	contacts[nb_contacts].fill_lastname(contact_info);
	nb_contacts += 1;
}

void	PhoneBook::search_contact(void)
{
	std::cout << "not developped yet\n";
}
