#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("default", 145, 137)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name) : AForm(name, 145, 137)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other.getName(), 145, 137)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	return *this;
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	std::string file_name(executor.getName() + "_target");
	std::ofstream file(file_name.c_str());
	if (!file)
		return;
	       ^
      ^^^
     ^^^^^
    ^^^^^^^
   ^^^^^^^^^
  ^^^^^^^^^^^
 ^^^^^^^^^^^^^
^^^^^^^^^^^^^^^
      |||
      |||

}