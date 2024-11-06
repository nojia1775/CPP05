#ifndef FORM_HPP

# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	private:
		const std::string	_name;
		bool			_signed;
		int			_sign_grade;
		int			_exec_grade;

	public:
					Form(void);
					~Form(void);

					Form(std::string name, int sign_grade, int exec_grade);
					Form(const Form& other);
		Form&			operator=(const Form& other);

		void			beSigned(Bureaucrat& buro);
		const std::string	getName(void) const;
		int			getExecGrade(void) const;
		int			getSignGrade(void) const;

		class			GradeTooLowException : public std::exception
		{
					public:
						const char	*what(void) const throw()
						{
							return "Grade too low";
						}
		};
		class			GradeTooHighException : public std::exception
		{
					public:
						const char	*what(void) const throw()
						{
							return "Grade too high";
						}
		};
};

std::ostream&	operator<<(std::ostream& o, const Form& form);

#endif