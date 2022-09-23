#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie{
	public:
		Zombie(std::string assignation);
		~Zombie();
		void announce (void) const;
	private:
		std::string name;

};
#endif
