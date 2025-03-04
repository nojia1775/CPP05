#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat a("Noah", 151);
		std::cout << a << "\n";
		a.promote();
		std::cout << a << "\n";
		a.depromote();
		std::cout << a << "\n";
	}
	catch (const std::exception& e) { std::cout << e.what() << "\n"; }
	return 0;
}