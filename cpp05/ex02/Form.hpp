#ifndef FORM_HPP
#define FORM_HPP

#include <exception>
#include "bureaucrat.hpp"

class Bureaucrat;
class Form {
	public :
		Form();
		Form(std::string const & name, int grade_exec, int grade_sign);
		Form(Form const & copy);
		virtual ~Form();
		virtual Form &		operator=(Form const & toAssign);
		std::string const &	getName(void) const;
		int					getGrade_exec(void) const;
		int					getGrade_sign(void) const;
		int					getSign(void) const;
		virtual void		beSign(Bureaucrat const & employee);
		void				execute(Bureaucrat const & executor) const;
		virtual void		doTheJob(Bureaucrat const & executor) const = 0;
		class GradeToLowException : public std::exception {
			public :
				GradeToLowException() : exception::exception(), _ErrorMessage("Form::Grade is too LOW\n"){
				}
				virtual ~GradeToLowException() throw() {return ;}
				virtual const char *what() const throw() {
					return (this->_ErrorMessage.c_str());
				}
			private :
				std::string _ErrorMessage;
		};
		class AlreadySigned : public std::exception {
			public :
				AlreadySigned() : exception::exception(), _ErrorMessage("Form is already signed\n"){
				}
				virtual ~AlreadySigned() throw() {return ;}
				virtual const char *what() const throw() {
					return (this->_ErrorMessage.c_str());
				}
			private :
				std::string _ErrorMessage;
		};
		class GradeToHighException : public std::exception {
			public :
				GradeToHighException() : exception::exception(), _ErrorMessage("Form::Grade is too HIGH\n"){
				}
				virtual ~GradeToHighException() throw() {return ;}
				virtual const char *what() const throw() {
					return (this->_ErrorMessage.c_str());
				}
			private :
				std::string _ErrorMessage;
		};


	protected :
		const std::string	_name;
		bool				_isSign;
		const int			_grade_exec;
		const int			_grade_sign;
};


std::ostream & operator<<(std::ostream & o, Form const & output);

#endif

