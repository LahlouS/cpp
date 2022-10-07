#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Bureaucrat{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & toAssign);
		Bureaucrat & operator=(Bureaucrat const & toAssign);
		~Bureaucrat();

		Bureaucrat operator++(int);
		Bureaucrat & operator++(void);
		void				setName(std::string name);
		void				setGrade(int grade);
		std::string getName(void) const;
		int			getGrade(void) const;


	private:
		std::string	_name;
		int			_grade;
};


#endif
