#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		Intern intern;
		Bureaucrat buro("Buro", 1);
		AForm *form;
		form = intern.makeForm("robotomy request", "test");
		buro.signForm(*form);
		buro.executeForm(*form);
		form = intern.makeForm("shrubbery creation", "test");
		buro.signForm(*form);
		buro.executeForm(*form);
		form = intern.makeForm("presidential pardon", "test");
		buro.signForm(*form);
		buro.executeForm(*form);
		form = intern.makeForm("hugo tsr", "test");
		buro.signForm(*form);
		buro.executeForm(*form);
	}
	catch (const std::exception& e) { std::cout << e.what() << "\n"; }
	return 0;
}