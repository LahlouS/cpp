#include <iostream>
#include <string>
#include "bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("randomEmplee"), _grade(100){
	std::cout << "Default constructor has been called\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
	std::cout << "[BUREAUCRAT] Assignement constructor has been called\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const & toAssign){
	this->_name = toAssign.getName();
	this->_grade = toAssign.getGrade();
}

Bureaucrat::~Bureaucrat(){
	std::cout << "[BUREAUCRAT] Destrctor has been called\n";
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & toAssign){
	std::cout << "[BUREAUCRAT] = Overload has been called\n";
	this->_name = toAssign.getName();
	this->_grade = toAssign.getGrade();
	return (*this);
}

void	Bureaucrat::setName(std::string name){
	this->_name = name;
}

void	Bureaucrat::setGrade(int grade){
	this->_grade = grade;
}

std::string Bureaucrat::getName(void) const{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const{
	return (this->_grade);
}

Bureaucrat Bureaucrat::operator++(int){
	std::cout << "in ++ POST-incr overload for " << this->_name << "\n\n";
	Bureaucrat tmp(*this);
	operator++();
	return (tmp);
}

Bureaucrat & Bureaucrat::operator++(void){
	std::cout << "in ++ PRE-incr overload for " << this->_name << "\n\n";
	this->_grade -= 1;
	return (*this);
}

