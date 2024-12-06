#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern a;
	Bureaucrat b("buro", 1);
	AForm *form = NULL;
	try
	{
		form = a.makeForm("robotomy request", "test");
		b.signForm(*form);
		b.executeForm(*form);
		delete form;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}