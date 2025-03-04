#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat a("Buro", 100);
		Form form("Fichier", 100, 50);
		std::cout << a << "\n" << form << "\n";
		std::cout << "Trying to sign : \n";
		a.signForm(form);
		std::cout << form << "\n";
		a.signForm(form);
		std::cout << form << "\n";
	}
	catch (const std::exception& e) { std::cout << e.what() << "\n"; }
	return 0;
}