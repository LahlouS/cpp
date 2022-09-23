#include <iostream>
#include "Contact.hpp"


Contact::Contact()
{
	info[0] = "default";
	info[1] = "default";
	info[2] = "default";
	info[3] = "default";
	info[4] = "default";
}

void	Contact::fill_name(std::string name)
{
	info[0] = name;
}

void	Contact::fill_lastname(std::string lastname)
{
	info[1] = lastname;
}

void	Contact::fill_nickname(std::string nickname)
{
	info[2] = nickname;
}

void	Contact::fill_phone(std::string phone)
{
	info[3] = phone;
}

void	Contact::fill_darkest_secret(std::string darkest_secret)
{
	info[4] = darkest_secret;
}

std::string	Contact::contacts_info(int wich_info) const
{
	return (info[wich_info]);
}
