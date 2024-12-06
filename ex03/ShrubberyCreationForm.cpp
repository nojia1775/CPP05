#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationFrom", 145, 137), _target("default")
{
	//std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	//std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationFrom", 145, 137), _target(target)
{
	//std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm("ShrubberyCreationFrom", 145, 137), _target(other.getTarget())
{
	//std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	(void)other;
	return *this;
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (this->getSigned() == false)
		throw IsNotSigned();
	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	std::string file_name(_target + "_target");
	std::ofstream file(file_name.c_str());
	if (!file)
		return;
	file << "       ^       " << std::endl;
	file << "      ^^^      " << std::endl;
	file << "     ^^^^^     " << std::endl;
	file << "    ^^^^^^^    " << std::endl;
	file << "   ^^^^^^^^^   " << std::endl;
	file << "  ^^^^^^^^^^^  " << std::endl;
	file << " ^^^^^^^^^^^^^ " << std::endl;
	file << "^^^^^^^^^^^^^^^" << std::endl;
	file << "      |||      " << std::endl;
	file << "      |||      " << std::endl;
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return _target;
}