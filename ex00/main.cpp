#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat *a = NULL;

	try
	{
		a = new Bureaucrat("noah", 200);
	}
	catch (const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	if (a)
	{
		try
		{
			a->promote();
		}
		catch (const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException& e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (const Bureaucrat::GradeTooHighException& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << *a << std::endl;
		delete a;
	}
	return 0;
}