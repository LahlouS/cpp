#ifndef HARL_HPP
#define HARL_HPP

class Harl{
	public:
		Harl();
		~Harl();
		void complain( std::string level );
	private:
		std::string opt[4];
		void	(Harl::*message[4])(void);
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif
