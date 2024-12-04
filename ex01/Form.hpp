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
		const int 		_sign_grade;
		const int		_exec_grade;

	public:
					Form(void);
					~Form(void);

					Form(std::string name, const int sign_grade, const int exec_grade);
					Form(const Form& other);
		Form&			operator=(const Form& other);

		void			beSigned(Bureaucrat& buro);
		const std::string	getName(void) const;
		int			getExecGrade(void) const;
		int			getSignGrade(void) const;
		bool			getSigned(void) const;

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