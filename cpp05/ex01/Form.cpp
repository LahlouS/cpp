#include "Form.hpp"
#include <iostream>
#include <string>


Form::Form() : _name("02345904582fff12"), _isSign(0), _grade_exec(150), _grade_sign(150){
	std::cout << "[Form] Default construcor has been called\n";
}


Form::Form(std::string const & name, int grade_exec, int grade_sign)\
: _name(name), _isSign(0), _grade_exec(grade_exec), _grade_sign(grade_sign){
	if (_grade_exec < 1 || _grade_sign < 1)
		throw Form::GradeToHighException();
	else if (_grade_exec >150 || _grade_sign >150)
		throw Form::GradeToLowException();
	std::cout << "[Form] Assignement constructor has been called\n";
}

Form::Form(Form const & copy)
: _name(copy.getName()), _isSign(0), _grade_exec(copy.getGrade_exec()), _grade_sign(copy.getGrade_sign()){
	std::cout << "[Form] Copy constructor has been called\n";
}

Form &	Form::operator=(Form const & toAssign){
	_isSign = toAssign.getSign();
	return (*this);
}

Form::~Form(){
	std::cout << "[Form] Destructor has been called\n";
}

std::string const &	Form::getName(void) const{
	return (this->_name);
}

int	Form::getGrade_exec(void) const{
	return (this->_grade_exec);
}

int	Form::getGrade_sign(void) const{
	return (this->_grade_sign);
}

void		Form::beSign(Bureaucrat const & employee){
	if (employee.getGrade() <= this->_grade_sign && !_isSign)
		_isSign = 1;
	else if (employee.getGrade() > this->_grade_sign)
		throw Form::GradeToLowException();
	else
		throw Form::AlreadySigned();
}

int			Form::getSign(void) const{
	return (this->_isSign);
}

std::ostream & operator<<(std::ostream & o, Form const & output){
	std::string state;

	if (output.getSign())
		state = "signed";
	else
		state = "not signed";
	o << "Form n_ " << output.getName() << "\nstate: " \
	<< state << "\n" << "execution access: " << output.getGrade_exec() << "\n"
	<< "signature access: " << output.getGrade_sign() << "\n";
	return (o);
}
