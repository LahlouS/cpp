#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include "PhoneBook.hpp"


PhoneBook::PhoneBook() : nb_contacts(0)
{
}

void PhoneBook::add_contact()
{
	std::string contact_info;

	if	(nb_contacts == 8 && nb_contacts--)
		shift_contact();
	while (1)
	{

		std::cout << "Name :";
		if (!std::getline(std::cin, contact_info) && std::cout  << std::endl)
			break ;
		contacts[nb_contacts].fill_name(contact_info);
		std::cout << "Lastname :";
		if (!std::getline(std::cin, contact_info) && std::cout  << std::endl)
			break ;
		contacts[nb_contacts].fill_lastname(contact_info);
		std::cout << "Nickname :";
		if (!std::getline(std::cin, contact_info) && std::cout  << std::endl)
			break ;
		contacts[nb_contacts].fill_nickname(contact_info);
		std::cout << "Phone number :";
		if (!std::getline(std::cin, contact_info) && std::cout  << std::endl)
			break ;
		contacts[nb_contacts].fill_phone(contact_info);
		std::cout << "Dirty little secret :";
		if (!std::getline(std::cin, contact_info) && std::cout  << std::endl)
			break ;
		contacts[nb_contacts].fill_darkest_secret(contact_info);
		if (contacts[nb_contacts].contacts_info(NAME).size() && contacts[nb_contacts].contacts_info(L_NAME).size()\
		&& contacts[nb_contacts].contacts_info(N_NAME).size() && contacts[nb_contacts].contacts_info(PHONE).size()\
		&& contacts[nb_contacts].contacts_info(SECRET).size())
			break ;
		else
			std::cout << "\n--> empty fields are not accepted\n\n";
	}
	nb_contacts += 1;
}
void	print_contact(Contact ctct, int index)
{
	std::cout << std::setw(10) << index + 1 << "|";
	if (ctct.contacts_info(NAME).size() > 10)
		std::cout << std::setw(10) << ctct.contacts_info(NAME).substr(0, 10).replace(9,9, ".") << "|";
	else
		std::cout << std::setw(10) << ctct.contacts_info(NAME) << "|";
	if (ctct.contacts_info(L_NAME).size() > 10)
		std::cout << std::setw(10) << ctct.contacts_info(L_NAME).substr(0, 10).replace(9,9, ".") << "|";
	else
		std::cout << std::setw(10) << ctct.contacts_info(L_NAME) << "|";
	if (ctct.contacts_info(N_NAME).size() > 10)
		std::cout << std::setw(10) << ctct.contacts_info(N_NAME).substr(0, 10).replace(9,9, ".") << "|";
	else
		std::cout << std::setw(10) << ctct.contacts_info(N_NAME) << "|";
	std::cout << "\n" << std::endl;
}

void	PhoneBook::search_contact(void)
{
	std::cout << "\t\t\t" << "****CONTACTS LIST****\n\n";
	int choice;

	for (int i = 0;i < nb_contacts;i++)
		print_contact(contacts[i], i);
	std::cout << "Your choice >> ";
	std::cin >> choice;
	while (getchar() != '\n');
	if (std::cin.fail() || !((choice - 1) >= 0 && (choice - 1) <= nb_contacts))
	{
		std::cin.clear();
		std::cout << "invalid field\n";
		return ;
	}
	std::cout << "\n" << "name: " << contacts[choice - 1].contacts_info(NAME) << "\n";
	std::cout << "last name: " << contacts[choice - 1].contacts_info(L_NAME) << "\n";
	std::cout << "nick name: " << contacts[choice - 1].contacts_info(N_NAME) << "\n";
	std::cout << "phone number: " << contacts[choice - 1].contacts_info(PHONE) << "\n";
	std::cout << "dirty little secret: " << contacts[choice - 1].contacts_info(SECRET) << "\n";
}

void	swap_contact(Contact &x, Contact y)
{
	x.fill_name(y.contacts_info(NAME));
	x.fill_lastname(y.contacts_info(L_NAME));
	x.fill_nickname(y.contacts_info(N_NAME));
	x.fill_phone(y.contacts_info(PHONE));
	x.fill_darkest_secret(y.contacts_info(SECRET));
}

void	PhoneBook::shift_contact(void)
{
	int nb_contacts_cpy = 0;
	Contact temp;

	while (nb_contacts_cpy < nb_contacts)
	{
		swap_contact(contacts[nb_contacts_cpy], contacts[nb_contacts_cpy + 1]);
		nb_contacts_cpy++;
	}
}
