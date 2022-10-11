#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include "Form.hpp"
#include <string>

class Form;
class Bureaucrat{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & toAssign);
		Bureaucrat & operator=(Bureaucrat const & toAssign);
		~Bureaucrat();

		Bureaucrat operator++(int);
		Bureaucrat & operator++(void);
		Bureaucrat operator--(int);
		Bureaucrat & operator--();
		std::string getName(void) const;
		int			getGrade(void) const;
		void		signForm(Form & f) const;
		void		executeForm(Form const & f) const;
		class GradeToHighException : public std::exception {
			public :
				GradeToHighException() : exception::exception(), _ErrorMessage("Bureaucrat::Grade is too HIGH, only value between 1 to 150 are accepted\n"){
				}
				virtual ~GradeToHighException() throw() {return ;}
				virtual const char *what() const throw() {
					return (this->_ErrorMessage.c_str());
				}
			private :
				std::string _ErrorMessage;
		};

		class GradeToLowException : public std::exception {
			public :
				GradeToLowException() : exception::exception(), _ErrorMessage("Bureaucrat::Grade is too LOW, only value between 1 to 150 are accepted\n"){
				}
				virtual ~GradeToLowException() throw() {return ;}
				virtual const char *what() const throw() {
					return (this->_ErrorMessage.c_str());
				}
			private :
				std::string _ErrorMessage;
		};


	private:
		void				setGrade(int grade);
		const std::string	_name;
		int					_grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & output);

#endif
