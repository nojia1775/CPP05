#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void) : _name("default"), _signed(false), _sign_grade(150), _exec_grade(150)
{
	//std::cout << "AForm default constructor called" << std::endl;
}

AForm::~AForm(void)
{
	//std::cout << "AForm " << _name << " destructor called" << std::endl;
}

AForm::AForm(std::string name, const int sign_grade, const int exec_grade) : _name(name), _signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (_exec_grade < 1 || _sign_grade < 1)
		throw AForm::GradeTooHighException();
	if (_exec_grade > 150 || _sign_grade > 150)
		throw AForm::GradeTooLowException();
	//std::cout << "AForm " << _name << " constructor called" << std::endl;
}

AForm::AForm(const AForm& other) : _name(other._name), _signed(other._signed), _sign_grade(other._sign_grade), _exec_grade(other._exec_grade)
{
	//std::cout << "AForm " << _name << " copy constructor called" << std::endl;
}

AForm&	AForm::operator=(const AForm& other)
{
	if (this != &other)
		_signed = other._signed;
	//std::cout << "AForm " << _name << " operator constructor called" << std::endl;
	return *this;
}

void	AForm::beSigned(Bureaucrat& buro)
{
	if (buro.getGrade() > _sign_grade)
		throw AForm::GradeTooLowException();
	this->_signed = true;
	std::cout << buro.getName() << " signed " << _name << std::endl;
}

const std::string	AForm::getName(void) const
{
	return _name;
}

int	AForm::getExecGrade(void) const
{
	return _exec_grade;
}

int	AForm::getSignGrade(void) const
{
	return _sign_grade;
}

bool	AForm::getSigned(void) const
{
	return _signed;
}

std::ostream&	operator<<(std::ostream& o, const AForm& form)
{
	o << "AForm name is " << form.getName() << std::endl;
	o << "AForm execution grade is " << form.getExecGrade() << std::endl;
	o << "AForm sign grade is " << form.getSignGrade() << std::endl;
	o << "AForm is signed ? " << form.getSigned() << std::endl;
	return o;
}