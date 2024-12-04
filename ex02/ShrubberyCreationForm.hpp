#ifndef SHRUBBERYCREATIONFORM_HPP

# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class	ShrubberyCreationForm : public AForm
{
	public:
					ShrubberyCreationForm(void);
					~ShrubberyCreationForm(void);

					ShrubberyCreationForm(const std::string name);
					ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& other);

		void			execute(const Bureaucrat& executor) const;

};

#endif