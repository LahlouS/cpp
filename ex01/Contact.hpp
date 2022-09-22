#ifndef CONTACT_HPP
#define CONTACT_HPP

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

#endif
