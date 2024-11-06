#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat a("test", 150);
	Form *form = NULL;

	try
	{
		std::cout << "trying to create form" << std::endl;
		form = new Form("fichier", 100, 50);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (form == NULL)
		return 0;
	try
	{
		std::cout << "trying to sign" << std::endl;
		a.signForm(*form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
;}