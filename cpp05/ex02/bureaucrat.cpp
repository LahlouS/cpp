#include <iostream>
#include <string>
#include "bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("randomEmplee"), _grade(150){
	std::cout << "[BUREAUCRAT] Default constructor has been called\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	this->setGrade(grade);
	std::cout << "[BUREAUCRAT] Assignement constructor has been called\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const & toAssign) : _name(toAssign.getName()), _grade(toAssign.getGrade()){
	std::cout << "[BUREAUCRAT] Copy constructor has been called\n";
}

Bureaucrat::~Bureaucrat(){
	std::cout << "[BUREAUCRAT] Destructor has been called\n";
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & toAssign){
	std::cout << "[BUREAUCRAT] = Overload has been called\n";
	this->_grade = toAssign.getGrade();
	return (*this);
}


void	Bureaucrat::setGrade(int grade){
	if (grade > 150)
		throw Bureaucrat::GradeToHighException();
	else if (grade < 1)
		throw Bureaucrat::GradeToLowException();
	this->_grade = grade;
}

std::string Bureaucrat::getName(void) const{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const{
	return (this->_grade);
}

Bureaucrat Bureaucrat::operator++(int){
	if (this->_grade == 1)
		throw Bureaucrat::GradeToHighException();
	Bureaucrat tmp(*this);
	operator++();
	return (tmp);
}

Bureaucrat & Bureaucrat::operator++(void){
	if (this->_grade == 1)
		throw Bureaucrat::GradeToHighException();
	this->_grade -= 1;
	return (*this);
}

Bureaucrat Bureaucrat::operator--(int){
	if (this->_grade == 150)
		throw Bureaucrat::GradeToLowException();
	Bureaucrat tmp(*this);
	operator--();
	return (tmp);
}

Bureaucrat & Bureaucrat::operator--(){
	if (this->_grade == 150)
		throw Bureaucrat::GradeToLowException();
	this->_grade += 1;
	return (*this);
}

void		Bureaucrat::signForm(Form & f) const{
	try {
		f.beSign(*this);
		std::cout << this->getName() << ", signed form " << f.getName();
	}
	catch (std::exception const & e){
		std::cout << this->getName() << ", couldn't sign " << f.getName() <<\
		" because " << e.what();
	}

}


std::ostream & operator<<(std::ostream & o, Bureaucrat const & output){
	o << output.getName() << ", bureaucrate grade " << output.getGrade() << "\n";
	return (o);
}

