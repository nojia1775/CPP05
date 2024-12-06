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
		const int 		_sign_grade;
		const int		_exec_grade;

	public:
					AForm(void);
		virtual			~AForm(void);

					AForm(std::string name, const int sign_grade, const int exec_grade);
					AForm(const AForm& other);
		AForm&			operator=(const AForm& other);

		void			beSigned(Bureaucrat& buro);
		const std::string	getName(void) const;
		int			getExecGrade(void) const;
		int			getSignGrade(void) const;
		bool			getSigned(void) const;
		virtual void		execute(const Bureaucrat& executor) const = 0;

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

		class			IsNotSigned : public std::exception
		{
					public:
						const char	*what(void) const throw()
						{
							return "Form is not signed";
						}
		};
};

std::ostream&	operator<<(std::ostream& o, const AForm& Aform);

#endif