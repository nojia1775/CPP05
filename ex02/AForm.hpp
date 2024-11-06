#ifndef AFORM_HPP

# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm
{
	private:
		const std::string	_name;
		bool			_signed;
		int			_sign_grade;
		int			_exec_grade;

	public:
					AForm(void);
					~AForm(void);
	
					AForm(std::string name, int sign_grade, int exec_grade);
					AForm(const AForm& other);
		AForm&			operator=(const AForm& other);

		virtual void		beSigned(Bureaucrat& buro) = 0;
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

std::ostream&	operator<<(std::ostream& o, const AForm& form);

#endif