#ifndef SHRUBBERYCREATIONFORM_HPP

# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class	ShrubberyCreationForm : public AForm
{
	private:
		const std::string	_target;
		
	public:
					ShrubberyCreationForm(void);
					~ShrubberyCreationForm(void);

					ShrubberyCreationForm(const std::string target);
					ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& other);

		void			execute(const Bureaucrat& executor) const;
		std::string		getTarget(void) const;
};

#endif