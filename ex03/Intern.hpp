#ifndef INTERN_HPP

# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
			Intern(void);
			~Intern(void);

			Intern(const Intern& other);
		Intern&	operator=(const Intern& other);

		AForm	*makeForm(const std::string name, const std::string target) const;

		class	FormDoesNotExist : public std::exception
		{
			public:
				const char	*what(void) const throw();
		};
};

#endif