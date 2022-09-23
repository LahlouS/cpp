#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie{
	public:
		Zombie();
		Zombie(std::string assignation);
		~Zombie();
		void announce(void) const;
		void setname(std::string assignation);
	private:
		std::string name;

};
#endif
