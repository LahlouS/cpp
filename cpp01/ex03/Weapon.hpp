#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon{
	public:
		Weapon();
		Weapon(std::string weapon_ass);
		~Weapon();
		std::string& getType(void);
		void	setType(std::string new_type);
	private:
		std::string	type;
};

#endif

