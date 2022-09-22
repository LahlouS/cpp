#ifndef HEADER_H
# define HEADER_H

enum {
	NAME,
	L_NAME,
	N_NAME,
	PHONE,
	SECRET
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
