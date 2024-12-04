#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat *a = NULL;
	try
	{
		a = new Bureaucrat("Noah", 1);
		std::cout << *a << std::endl;
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
			std::cout << *a << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		delete a;
	}
	return 0;
}