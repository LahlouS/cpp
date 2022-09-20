#ifndef HEADER_H
# define HEADER_H


class Contact{
	public:
	Contact();
	void	fill_name(std::string name);
	void	fill_lastname(std::string lastname);
	void	fill_nickname(std::string nickname);
	void	fill_phone(std::string phone);
	void	fill_darkest_secret(std::string darkest_secret);
	private:
	std::string info[5];
};


class PhoneBook{
	public:
		PhoneBook();
		void	add_contact();
		void	search_contact();
	private:
		Contact contacts[8];
		int nb_contacts;
};

#endif
