#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain{
	public:
			Brain();
			Brain(std::string const & assignement);
			Brain(Brain const & to_assign);
		Brain & operator=(Brain const & to_assign);
			~Brain();
	private:
		std::string brain[100];
};

#endif
