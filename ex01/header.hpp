#ifndef HEADER_H
# define HEADER_H

enum {
	NAME,
	L_NAME,
	N_NAME,
	PHONE,
	SECRET
};

class Contact{
	public:
	Contact();
	void		fill_name(std::string name);
	void		fill_lastname(std::string lastname);
	void		fill_nickname(std::string nickname);
	void		fill_phone(std::string phone);
	void		fill_darkest_secret(std::string darkest_secret);
	std::string	contacts_info(int wich_info) const;

	private:
	std::string info[5];
};


class PhoneBook{
	public:
		PhoneBook();
		void	add_contact();
		void	search_contact();
		void	shift_contact();
	private:
		Contact contacts[8];
		int nb_contacts;
};


void	print_contact(std::string ctct, int index);
void	swap_contact(Contact &x, Contact y);
#endif
