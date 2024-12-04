#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat a("test", 100);
	Form *form = NULL;

	try
	{
		std::cout << "trying to create form" << std::endl;
		form = new Form("fichier", 100, 50);
		std::cout << *form << std::endl;
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
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}