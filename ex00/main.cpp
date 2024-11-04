#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat noah("Noah", -1);
	Bureaucrat test = noah;
	test.getGrade();
	test.getName();
	return 0;
}