#include "Intern.hpp"

Intern::Intern(void)
{
	// std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern(void)
{
	// std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(const Intern& other)
{
	(void)other;
	// std::cout << "Intern copy constructor called" << std::endl;
}

Intern&	Intern::operator=(const Intern& other)
{
	(void)other;
	return *this;
}

AForm	*Intern::makeForm(const std::string name, const std::string target) const
{
	std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int index;
	AForm *form = NULL;
	for (index = 0 ; index < 3 ; index++)
		if (name == forms[index])
			break;
	switch (index)
	{
		case 0:
			form = new ShrubberyCreationForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new PresidentialPardonForm(target);
			break;
		default:
			throw FormDoesNotExist();
			break;
	}
	return form;
}

const char	*Intern::FormDoesNotExist::what(void) const throw()
{
	return "Intern can't create form because it doesn't exist";
}