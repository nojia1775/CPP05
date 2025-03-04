#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name("default"), _signed(false), _sign_grade(150), _exec_grade(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Form " << _name << " destructor called" << std::endl;
}

Form::Form(std::string name, const int sign_grade, const int exec_grade) : _name(name), _signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (_exec_grade < 1 || _sign_grade < 1)
		throw Form::GradeTooHighException();
	if (_exec_grade > 150 || _sign_grade > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form " << _name << " constructor called" << std::endl;
}

Form::Form(const Form& other) : _name(other._name), _signed(other._signed), _sign_grade(other._sign_grade), _exec_grade(other._exec_grade)
{
	std::cout << "Form " << _name << " copy constructor called" << std::endl;
}

Form&	Form::operator=(const Form& other)
{
	if (this != &other)
		_signed = other._signed;
	std::cout << "Form " << _name << " operator constructor called" << std::endl;
	return *this;
}

void	Form::beSigned(Bureaucrat& buro)
{
	if (_signed)
		throw AlreadySigned();
	if (buro.getGrade() > _sign_grade)
		throw Form::GradeTooLowException();
	this->_signed = true;
	std::cout << buro.getName() << " signed " << _name << std::endl;
}

const std::string	Form::getName(void) const
{
	return _name;
}

int	Form::getExecGrade(void) const
{
	return _exec_grade;
}

int	Form::getSignGrade(void) const
{
	return _sign_grade;
}

bool	Form::getSigned(void) const
{
	return _signed;
}

std::ostream&	operator<<(std::ostream& o, const Form& form)
{
	o << "Form name is " << form.getName() << std::endl;
	o << "Form execution grade is " << form.getExecGrade() << std::endl;
	o << "Form sign grade is " << form.getSignGrade() << std::endl;
	o << "Is form signed : ";
	form.getSigned() ? o << "Yes\n" : o << "No\n";
	return o;
}