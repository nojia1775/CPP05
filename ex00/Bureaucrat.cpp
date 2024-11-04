#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150)
{
	std::cout << "Bureaucrat " << _name << " default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat " << _name << " destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat " << _name << " constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade)
{
	std::cout << "Bureaucrat " << _name << " copy constructor calles" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
		this->_grade = other._grade;
	return *this;
}

void	Bureaucrat::getName(void) const
{
	std::cout << _name << std::endl;
}

void	Bureaucrat::getGrade(void) const
{
	std::cout << _grade << std::endl;
}

void	Bureaucrat::promote(void)
{
	this->_grade--;
}

void	Bureaucrat::depromote(void)
{
	this->_grade++;
}

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& bureaucrat)
{
	o << "Bureaucrat name is " << bureaucrat.getName() << std::endl;
	o << "Bureaucrat garde is " << bureaucrat.getGrade() << std::endl;
}